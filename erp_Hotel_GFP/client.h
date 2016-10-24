#ifndef CLIENT_H
#define CLIENT_H

#include"QString"

#include "QSqlQueryModel"
class client{
protected:
    QString nom,prenom,naissance,adresse,sejour;
    int cin,tel;
public:
    client(){};
    client(QString nom, QString prenom, QString naissance, int cin, int tel, QString adresse, QString sejour);
    QString getNom(){ return nom;}
    QString getPrenom() {return prenom;}
    QString getNaissancce(){return naissance;}
    int getCin() {return cin;}
    int getTel() {return tel;}
    QString getAdresse() {return adresse;}
    QString getSejour() {return sejour;}
    bool enregistrer_client(client *cl);
    virtual QSqlQueryModel * afficher_client();
    QSqlQueryModel * rechercher_client(int cin);
    bool supprimer_client(int cin);
    virtual QSqlQueryModel * afficher_clientRech(int cin);
};

#endif // CLIENT_H
