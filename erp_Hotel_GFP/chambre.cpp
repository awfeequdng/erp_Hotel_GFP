#include "CHAMBRE.h"
#include "QDebug"
CHAMBRE::CHAMBRE(int num, int etage, int capacite, QString debut_reserv, QString fin_reserv){
    this->num=num;
    this->etage=etage;
    this->capacite=capacite;
    this->debut_reserv=debut_reserv;
    this->fin_reserv=fin_reserv;
}

QSqlQueryModel * CHAMBRE:: afficher_chambre()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("select * from CHAMBRES /*where CAPACITE=*/")/*+QString::number(capacite))*/;
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("NUM"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("ETAGE"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("CAPACITE"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("DEBUT RESERVATION"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("FIN RESERVATION"));
    return model;
}
QSqlQueryModel * CHAMBRE ::rechercher_chambre()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    QString str="select * from CLIENTS where CAPACITE ="+QString::number(capacite);
    model->setQuery(str);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("CAPACITE"));
    return model;
}


