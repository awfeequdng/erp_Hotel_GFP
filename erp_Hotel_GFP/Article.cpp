#include "Article.h"
#include<iostream>
#include<QSqlQuery>
#include<QSqlRecord>
#include<QString>
#include <QDebug>
#include<QDate>
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
using namespace std;

Article::Article(int id_Article,QString Libelle,float Prixu,QString Description)
{
    this->id_Article=id_Article;
    this->Libelle=Libelle;
    this->Prixu=Prixu;
    this->Description=Description;

}
Article::Article(int id_Article)
{
    this->id_Article=id_Article;}

void Article::ajouterArticle()
{

    QSqlQuery query;

   query.exec("insert into Article values('"+QString::number(getIdArticle())+"','"+getLibelle()+"','"+getDescription()+"','"+QString::number(getPrixu())+"','"+QString::number(0)+"')");


}
int Article::Rechercher(int ida)
{

   QSqlQuery query;
    int test=0;
    query.exec("select * from Article where id_Article="+QString::number(ida));

    while(query.next())
        test++;

    return(test);
}

void Article::Supprimer(int ida)
{QSqlQuery query;
    query.exec("delete from Article where(id_Article="+QString::number(ida)+")");
}
void Article::Modifier(int ida)
{QSqlQuery query;
    query.exec("update Article Set Libelle='"+getLibelle()+"',Prixu='"+QString::number(getPrixu())+"',description='"+getDescription()+"' where(id_Article='"+QString::number(ida)+"')");
}
QSqlQueryModel * Article::Afficher(QString tripar,QString typetri)
{QString tri="asc";
    if(typetri=="Décroissant")tri="desc";
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("select * from Article order by("+tripar+")"+tri+"");

model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
       model->setHeaderData(1, Qt::Horizontal, QObject::tr("Libelle"));
       model->setHeaderData(2, Qt::Horizontal, QObject::tr("description"));
       model->setHeaderData(3, Qt::Horizontal, QObject::tr("prix"));
       model->setHeaderData(4, Qt::Horizontal, QObject::tr("Quantité"));
    return model;

}
QSqlQueryModel *Article::Rechercher_Afficher(int ida)
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("select * from Article where(id_Article='"+QString::number(ida)+"')");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
       model->setHeaderData(1, Qt::Horizontal, QObject::tr("Libelle"));
       model->setHeaderData(2, Qt::Horizontal, QObject::tr("description"));
       model->setHeaderData(3, Qt::Horizontal, QObject::tr("prix"));
       model->setHeaderData(4, Qt::Horizontal, QObject::tr("Quantité"));

       return model;

}

QSqlQueryModel *Article::Actualiser_idArticle()
{QSqlQueryModel * model= new QSqlQueryModel();
     model->setQuery("Select id_Article from Article");

     return model;

}

QString Article::TrouverLibelle(int ida)
{ QSqlQuery query;
    QString result;
    query.exec("Select * from Article where(id_Article="+QString::number(ida)+")");
    QSqlRecord rec = query.record();

    //aqDebug() << "Number of columns: " << rec.count();

    int nameCol = rec.indexOf("Libelle"); // index of the field "name"
    while (query.next())
    {
       // qDebug() << query.value(nameCol).toString(); // output all names
    //qDebug()<<"Select * from Article where(id_Article="+QString::number(ida)+")";
    result=query.value(nameCol).toString();
    }

    return(result);
}
float Article::TrouverPrixu(int ida)
{ QSqlQuery query;
    float result;
    query.exec("Select * from Article where(id_Article="+QString::number(ida)+")");
    QSqlRecord rec = query.record();

    //aqDebug() << "Number of columns: " << rec.count();

    int nameCol = rec.indexOf("Prixu"); // index of the field "name"
    while (query.next())
    {
       // qDebug() << query.value(nameCol).toString(); // output all names
    //qDebug()<<"Select * from Article where(id_Article="+QString::number(ida)+")";
    result=query.value(nameCol).toFloat();
    }

    return(result);

}
QString Article::TrouverDescription(int ida)
{ QSqlQuery query;
    QString result;
    query.exec("Select * from Article where(id_Article="+QString::number(ida)+")");
    QSqlRecord rec = query.record();

    //aqDebug() << "Number of columns: " << rec.count();

    int nameCol = rec.indexOf("Description"); // index of the field "name"
    while (query.next())
    {

    result=query.value(nameCol).toString();
    }

    return(result);
}
void Article::cmdentree(int id)
{ QSqlQuery query;
    query.exec("update Article SET Quantite = Quantite + (SELECT Quantite_C from Contenir where Article.id_Article = Contenir.id_Article and Contenir.id_Commande='"+QString::number(id)+"')where id_Article in (select id_Article from Contenir where Contenir.id_Commande='"+QString::number(id)+"')");
}

void Article::cmdsortie(int id)
{
    QSqlQuery query,quer;
        query.exec("update Article SET Quantite = Quantite -(SELECT quantiteU from Utiliser where Article.id_Article = Utiliser.id_Article and Utiliser.id_Demande='"+QString::number(id)+"')where id_Article in (select id_Article from Utiliser where Utiliser.id_Demande='"+QString::number(id)+"')");
quer.exec("update Demande set id_respStock='"+QString::number(15)+"'where id_Demande='"+QString::number(id)+"'");
}
