#include"cl_etretien_machies.h"

#include "QDebug"
#include"QString"
#include "QSqlQueryModel"
#include <QStandardItemModel>
#include <QtSql>
#include "QTableView"
#include"machine.h"
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
CL_etretien_machies::CL_etretien_machies(QString id_entretien, QString date,QString id_machine,QString tache, QString technicien_resp, QString remarques):machine(id_machine)
{
    this->date=date;
    this->tache=tache;
    this->technicien_resp=technicien_resp;
    this->id_entretien=id_entretien;
    this->remarques=remarques;
}
CL_etretien_machies::CL_etretien_machies()
{
    date=" ";
   tache=" ";
   technicien_resp=" ";
    id_entretien=" ";
    remarques=" ";
}
bool CL_etretien_machies::ajoutEntretien(CL_etretien_machies *m)
{

   QSqlQuery query;

        QString str="insert into planification_ent_machine values('"+m->get_id_entretien()+"','"+m->get_date()+"','"+m->get_id_machine()+"','"+m->get_tache()+"','"+m->get_technicien_resp()+"','"+m->get_remarques()+"')";
    qDebug()<<str;
    bool res1 = query.exec(str);
    return res1;

}



QSqlQueryModel * CL_etretien_machies::afficherEntretien(QString tech)
{
    QSqlQueryModel * model= new QSqlQueryModel();

    model->setQuery("select * from planification_ent_machine where technicien_resp='"+tech+"'");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id_entretien"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("date"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("id_mach"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("tache"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("technicien_resp"));
   model->setHeaderData(5, Qt::Horizontal, QObject::tr("remarques"));

    return model;

}

void CL_etretien_machies::modifEntretien(CL_etretien_machies *m,QString id)
{

   QSqlQuery req;

    req.prepare("update planification_ent_machine set id_entretien = ?, date = ? ,id_mach_2 = ?, tache = ?, technicien_resp = ? , remarques = ?  where  id_entretien = ?");

   QString str1 = m->get_id_entretien();
   QString str2 = m->get_date();
   QString str3 = m->get_id_machine();
   QString str4 = m->get_tache();
   QString str5 = m->get_technicien_resp();
   QString str6 = m->get_remarques();
   QString str7 = id ;
   req.addBindValue(str1);
   req.addBindValue(str2);
   req.addBindValue(str3);
   req.addBindValue(str4);
   req.addBindValue(str5);
   req.addBindValue(str6);
   req.addBindValue(str7);
   req.exec();
   if (req.exec())
   {
       qDebug("requete reussi");


       QMessageBox::information(0, qApp->tr("modif"),
           qApp->tr("Informations modifiées avec succè"), QMessageBox::Ok);
   }
   else
       QMessageBox::critical(0, qApp->tr("modif"),
           qApp->tr("Probléme de modification"), QMessageBox::Cancel);

}

bool CL_etretien_machies::supprimerEnt(QString id_ent)
{
    QSqlQuery query;
    QString str=("delete from planification_ent_machine where id_entretien='"+id_ent+"'");
    qDebug()<<str;
    bool res = query.exec(str);
    return res;

}

QSqlQueryModel * CL_etretien_machies::rechercher_entretien_a_supprimer(QString id)
{
    QSqlQueryModel * model= new QSqlQueryModel();
    QString str=("select * from planification_ent_machine where id_entretien='"+id+"'");


    return model;
}
