#ifndef CONGE_H
#define CONGE_H
#include<QString>

#include "QSqlQueryModel"


#include<QSqlQuery>
using namespace std;


class Conge
{
protected:

    int id;
    QString dateDebut;
    QString dateFin;
public:

    QString getDateDebut(){return dateDebut;}
    void setDateDebut(QString dateDebut){this->dateDebut=dateDebut;}
    int getId(){return id;}
    void setId(int id){this->id=id;}
    QString getDateFin(){return dateFin;}
    void setDateFin(QString dateFin){this->dateFin=dateFin;}

    Conge(int=0, QString="",QString="");


    bool ajoutConge(Conge *e);

    QSqlQueryModel * rechercherConge(int id);
};

#endif // CONGE_H
