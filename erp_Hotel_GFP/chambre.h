#ifndef CHAMBRE_H
#define CHAMBRE_H
#include"QString"
#include "connection.h"
#include "QSqlQueryModel"
class CHAMBRE{
protected:
    int num, etage, capacite;
    QString  debut_reserv, fin_reserv;
public:
    CHAMBRE(){};
    CHAMBRE(int num, int etage, int capacite, QString debut_reserv, QString fin_reserv);
    int getNum(){return num;}
    int getEtage(){return etage;}
    int getCapacite(){return capacite;}
    QString getDebut_reserv(){return debut_reserv;}
    QString getFin_reserv(){return fin_reserv;}
    virtual QSqlQueryModel * afficher_chambre();
    QSqlQueryModel * rechercher_chambre();

};
#endif // CHAMBRE_H
