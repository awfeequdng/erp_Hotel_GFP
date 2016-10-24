#ifndef CL_ETRETIEN_MACHIES_H
#define CL_ETRETIEN_MACHIES_H
#include"QString"
#include "QSqlQueryModel"
#include"machine.h"

class CL_etretien_machies : public machine
{private :

    QString date ;
   QString tache ;
   QString technicien_resp ;
    QString id_entretien ;
    QString remarques ;


public:

    QString get_date(){return date;} ;
  QString get_technicien_resp(){return technicien_resp;} ;
    QString get_id_entretien(){return id_entretien ;} ;
    QString get_remarques(){return remarques ;} ;
     QString get_tache(){return tache ;} ;
     void modifEntretien(CL_etretien_machies *m,QString id);
    virtual QSqlQueryModel * afficherEntretien(QString tech);
    bool supprimerEnt(QString id_ent);
    bool ajoutEntretien(CL_etretien_machies *m);
    QSqlQueryModel* rechercher_entretien_a_supprimer(QString id);

    CL_etretien_machies();
    CL_etretien_machies(QString id_entretien ,
    QString date ,QString id_machine,
     QString tache ,
   QString technicien_resp ,
     QString remarques );
};

#endif // CL_ETRETIEN_MACHIES_H
