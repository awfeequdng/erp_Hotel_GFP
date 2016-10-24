#ifndef ABSENCES_H
#define ABSENCES_H
#include<QString>
#include "QSqlQueryModel"

#include"personne.h"
#include<QSqlQuery>
using namespace std;
class Absences
{
protected:

    int id;
    QString date;
public:

    QString getDate(){return date;}
    void setDate(QString date){this->date=date;}
    int getId(){return id;}
    void setId(int id){this->id=id;}

    Absences(int=0, QString="");


    bool ajoutAbsences(Absences *e);

    QSqlQueryModel * rechercherAbsences(int id);

};

#endif // ABSENCES_H
