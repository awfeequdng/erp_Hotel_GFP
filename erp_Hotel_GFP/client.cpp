#include "client.h"
#include "QDebug"
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
client::client(QString nom, QString prenom, QString naissance, int cin, int tel, QString adresse, QString sejour)
{
    this->nom= nom;
    this->prenom=prenom;
    this->naissance=naissance;
    this->cin=cin;
    this->tel=tel;
    this->adresse=adresse;
    this->sejour=sejour;
}
bool client::enregistrer_client(client * cl)
{
QSqlQuery query;
QString str= "insert into CLIENTS values('"+cl->getNom()+"','"+cl->getPrenom()+"', '"+cl->getNaissancce()+"',"+QString::number(cl->getCin())+","+QString::number(cl->getTel())+", '"+cl->getAdresse()+"', '"+cl->getSejour()+"')" ;
qDebug()<<str;
bool res1 = query.exec(str);
return res1;
}
QSqlQueryModel * client::afficher_client()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("select * from CLIENTS");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("PRENOM"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("DATE DE NAISSANCE"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("CIN"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("N° TEL"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("ADRESSE"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("DERNIER SEJOUR"));

    return model;
}
QSqlQueryModel * client::rechercher_client(int cin)
{
    QSqlQueryModel * model= new QSqlQueryModel();
    QString str="select * from CLIENTS where cin ="+QString::number(cin);
    model->setQuery(str);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("CIN"));
    return model;
}
bool client::supprimer_client(int cin)
{
    QSqlQuery query;
    QString str="delete from CLIENTS where cin ="+QString::number(cin);
    qDebug()<<str;
    bool res = query.exec(str);
    return res;
}

QSqlQueryModel * client::afficher_clientRech(int cin)
{
    QSqlQueryModel * model= new QSqlQueryModel();
    QString str="select * from CLIENTS where cin ="+QString::number(cin);
    model->setQuery(str);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("PRENOM"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("DATE DE NAISSANCE"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("CIN"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("N° TEL"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("ADRESSE"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("DERNIER SEJOUR"));

    return model;
}

