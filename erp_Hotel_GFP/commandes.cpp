#include "commandes.h"
#include"QDate"
#include <QSqlQuery>
Commandes::Commandes()
{
}
Commandes::Commandes(int IDCommande){this->IDCommande=IDCommande;}
Commandes::Commandes(int IDCommande,int IDArticle_C,int quantiteC)
{this->IDArticle_C=IDArticle_C;
 this->IDCommande=IDCommande;
 this->quantiteC=quantiteC;
}
void Commandes::creecmd()
{QDate date=QDate::currentDate();
    QString datetext= date.toString("dd.MM.yyyy");

    QSqlQuery query;

    query.exec("insert into Commandes (id_Commande,DateC)values('"+QString::number(getIdCommande())+"','"+datetext+"')");

}
void Commandes::AjouterArticle_cmd()
{
    QSqlQuery query;

   query.exec("insert into Contenir values('"+QString::number(getIdCommande())+"','"+QString::number(getIDArticle_C())+"','"+QString::number(getQuantiteC())+"')");}

int Commandes::idcmdmax()
{
    QSqlQuery query;
        int result;
        query.exec("Select Max(id_commande)from Commandes ");
        QSqlRecord rec = query.record();



        int nameCol = rec.indexOf("Max(id_commande)");
        while (query.next())
        {

            result=query.value(nameCol).toInt()+1;
        }

        return(result);
}
QSqlQueryModel *Commandes::AfficherCmd()
{   QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("select C.id_Commande,A.Libelle,C.Quantite_C from Article A inner join Contenir C on A.id_Article=C.id_Article where(C.id_Commande='"+QString::number(getIdCommande())+"')");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Commande N° :"));
       model->setHeaderData(1, Qt::Horizontal, QObject::tr("Article :"));
       model->setHeaderData(2, Qt::Horizontal, QObject::tr("Quantite"));

    return model;
}
void Commandes::supprimerArticle_cmd()
{QSqlQuery query;
    query.exec("delete from Contenir where(id_Article='"+QString::number(getIDArticle_C())+"'and id_Commande='"+QString::number(getIdCommande())+"')");
}
void Commandes::cmdentree(int id)
{ QSqlQuery query;
    query.exec("update Commandes SET id_Employe='"+QString::number(15)+"'where id_Commande='"+QString::number(id)+"'");
}

int Commandes::nblignecmd(int idc)
{
    QSqlQuery query;
     int test=0;
     query.exec("select * from Contenir where id_Commande="+QString::number(idc));

     while(query.next())
         test++;

     return(test);
}

QSqlQueryModel *Commandes::cmdnonpasser()
{QSqlQueryModel * model= new QSqlQueryModel();
     model->setQuery("Select id_Commande from Commandes where(id_Fournisseur isnull)");

     return model;

}
QSqlQueryModel *Commandes::specialite_liste()
{QSqlQueryModel * model= new QSqlQueryModel();
     model->setQuery("Select Specialite from Fournisseur group by Specialite");

     return model;

}

QSqlQueryModel *Commandes::Fournisseur_Details(QString sp)
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("Select P.Nom from Personne P inner join Fournisseur F on F.cinF=P.cin where F.Specialite='"+sp+"'");
         return model;

}
QSqlQueryModel *Commandes::PlusDetails(QString sp)
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("Select P.Nom,P.prenom,P.num_tel from Personne P inner join Fournisseur F on F.cinF=P.cin where F.Specialite='"+sp+"'");
         return model;

}
void Commandes::Passercmd(int idc,QString sp,QString nom)
{QSqlQuery query;
    query.exec("update Commandes SET id_Fournisseur =(SELECT cinF from Fournisseur inner join Personne on cinF=Personne.cin where(Personne.Nom='"+nom+"'and Fournisseur.Specialite='"+sp+"'))where id_Commande="+QString::number(idc));

}
QSqlQueryModel *Commandes::cmdnonentree()
{QSqlQueryModel * model= new QSqlQueryModel();
     model->setQuery("Select id_Commande from Commandes where(id_Employe isnull)");

     return model;

}

QSqlQueryModel *Commandes::cmdaImprimer()
{
    QSqlQueryModel * model= new QSqlQueryModel();
         model->setQuery("Select id_Commande from Commandes where(id_Employe is not null and id_Facture is not null and id_Fournisseur is not null)");

         return model;
}
QSqlQueryModel *Commandes::Imprimercmd()
{   QSqlQueryModel * model= new QSqlQueryModel();
    QString espc="_________________________________";
    QString numc=QString::number(getIdCommande());
    QString numf=QString::number(getIdCommande()+10);
    QString numctxt="Commande N° :";
    QString numftxt="Facture N° :";
    QString tot="Prix Total ";
    QString nomf="Nom Fournisseur";
    QString prenomf="Prenom Fournisseur";
    model->setQuery("select A.Libelle,C.Quantite_C from Article A inner join Contenir C on A.id_Article=C.id_Article where(C.id_Commande='"+QString::number(getIdCommande())+"') union All Select '"+espc+"','"+espc+"' union ALL Select '"+numctxt+"','"+numc+"'union ALL Select '"+numftxt+"','"+numf+"' union All select '"+nomf+"',P.Nom from Personne P inner join Commandes C on C.id_Fournisseur=P.cin where(C.id_Commande='"+numc+"')union All select '"+prenomf+"',P.prenom from Personne P inner join Commandes C on C.id_Fournisseur=P.cin where(C.id_Commande='"+numc+"') union ALL Select '"+tot+"',prixtotal from Facture where id_Facture='"+QString::number(getIdCommande()+10)+"'");
    //model->setHeaderData(0, Qt::Horizontal, QObject::tr("Commande N° :"));
       model->setHeaderData(0, Qt::Horizontal, QObject::tr("Article :"));
       model->setHeaderData(1, Qt::Horizontal, QObject::tr("Quantite"));

    return model;
}

QSqlQueryModel *Commandes::cmdnonsortie()
{QSqlQueryModel * model= new QSqlQueryModel();
     model->setQuery("Select id_Demande from Demande where(id_respStock isnull)");

     return model;

}
