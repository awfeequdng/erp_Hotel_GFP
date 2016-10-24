#include "absences.h"


Absences::Absences(int id,QString date)
{
    this->id=id;
    this->date=date;

}

bool Absences::ajoutAbsences(Absences *e)
{

    QSqlQuery query;
    QString sId= QString::number(e->getId());
        QString str= "insert into Absence values("+sId+",'"+e->getDate()+"')";

    bool res1 = query.exec(str);
    return res1;


}

QSqlQueryModel * Absences::rechercherAbsences(int id)
{
    QSqlQueryModel * model= new QSqlQueryModel();

    QString str="select * from Absence where idAbsence ="+QString::number(id);
    model->setQuery(str);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Absence"));

    return model;

}


