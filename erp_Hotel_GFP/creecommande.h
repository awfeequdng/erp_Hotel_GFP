#ifndef CREECOMMANDE_H
#define CREECOMMANDE_H

#include <QWidget>
#include "Article.h"
#include "commandes.h"
namespace Ui {
class creecommande;
}

class creecommande : public QWidget
{
    Q_OBJECT
    
public:
    explicit creecommande(QWidget *parent = 0);
    ~creecommande();
    


private slots:
    void on_ajouter_clicked();

    void on_articleCB_currentIndexChanged(const QString &arg1);




    void on_QuantiteLE_textChanged(const QString &arg1);




    void on_TerminerPB_clicked();



    void on_SupprimerPB_clicked();



    void on_passercmdPB_clicked();

private:
    Ui::creecommande *ui;
Article art;
Commandes cmd;
};

#endif // CREECOMMANDE_H
