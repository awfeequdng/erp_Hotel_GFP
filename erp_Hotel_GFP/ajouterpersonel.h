#ifndef AJOUTERPERSONEL_H
#define AJOUTERPERSONEL_H

#include <QDialog>
#include<Employe.h>

namespace Ui {
class AjouterPersonel;
}

class AjouterPersonel : public QDialog
{
    Q_OBJECT
    
public:
    explicit AjouterPersonel(QWidget *parent = 0);
    ~AjouterPersonel();


    
private slots:


    void on_enregistrerPB_clicked();















    void on_RechercherGrhPB_clicked();



    void on_supprimerPB_clicked();

    void on_nouveauPB_clicked();



    void on_actualiserPB_clicked();

    void on_SortieCL_clicked();


    void on_enregistrerPB2_clicked();



    void on_deconnectionPB_clicked();

private:
    Ui::AjouterPersonel *ui;
    Employe tmpE;


};

#endif // AJOUTERPERSONEL_H
