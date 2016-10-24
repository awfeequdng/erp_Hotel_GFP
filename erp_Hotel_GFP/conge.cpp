#include "conge.h"

Conge::Conge(int id,QString dateDebut,QString dateFin)
{
    this->id=id;
    this->dateDebut=dateDebut;
    this->dateFin=dateFin;

}

bool Conge::ajoutConge(Conge *e)
{

    QSqlQuery query;
    QString sId= QString::number(e->getId());
        QString str= "insert into conge values("+sId+",'"+e->getDateDebut()+"','"+e->getDateFin()+"')";

    bool res1 = query.exec(str);
    return res1;


}

QSqlQueryModel * Conge::rechercherConge(int id)
{
    QSqlQueryModel * model= new QSqlQueryModel();

    QString str="select * from conge where idConge ="+QString::number(id);
    model->setQuery(str);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Date debut"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Date Fin"));

    return model;

}




