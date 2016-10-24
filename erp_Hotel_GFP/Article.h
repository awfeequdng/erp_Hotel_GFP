#ifndef ARTICLE_H
#define ARTICLE_H
#include<iostream>
#include<QString>
#include"QSqlQueryModel"
using namespace std;

class Article
{
private:
    int id_Article ;
    QString Libelle;
    float Prixu;
    QString Description;

    public:

    Article(){};
 Article(int,QString,float,QString);
void ajouterArticle();
Article(int);
int Rechercher(int );
void Supprimer(int);
void Modifier(int);
 QSqlQueryModel * Afficher(QString tripar,QString typetri);
QSqlQueryModel * Rechercher_Afficher(int);
QSqlQueryModel *Actualiser_idArticle();
QString TrouverLibelle(int);
float TrouverPrixu(int);
QString TrouverDescription(int);
void cmdentree(int);
void cmdsortie(int);
QString getDescription()
    {
        return Description;
    }

int getIdArticle()
    {
        return id_Article;
    }

    QString getLibelle()
    {
        return Libelle;
    }

    float getPrixu()
    {
        return Prixu;
    }






};

#endif // ARTICLE_H
