#ifndef COMMANDES_H
#define COMMANDES_H
#include"Article.h"
#include<QSqlQuery>
#include<QSqlRecord>
#include <QSqlQueryModel>
#include "QString"
class Commandes
{
private:
    int IDArticle_C;
    int IDCommande;
    int quantiteC;

public:
    Commandes(int,int,int);
    Commandes(int);
    Commandes();
   void cmdentree(int);
    int nblignecmd(int);
  QSqlQueryModel * AfficherCmd();
  QSqlQueryModel *cmdnonpasser();
  QSqlQueryModel *cmdnonentree();
  QSqlQueryModel *cmdnonsortie();
  QSqlQueryModel *specialite_liste();
  QSqlQueryModel *Fournisseur_Details(QString);
  QSqlQueryModel *PlusDetails(QString);
  QSqlQueryModel *Imprimercmd();
  QSqlQueryModel *cmdaImprimer();
 void Passercmd(int,QString,QString);
  void supprimerArticle_cmd();
    void creecmd();
    void AjouterArticle_cmd();
    int idcmdmax();

    int getIdCommande()
        {

            return(IDCommande);
        }
    int getQuantiteC()
    {
        return quantiteC;
    }
    int getIDArticle_C()
        {
            return IDArticle_C;
        }

};

#endif // COMMANDES_H
