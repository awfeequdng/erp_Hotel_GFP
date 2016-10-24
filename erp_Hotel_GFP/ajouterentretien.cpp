#include "ajouterentretien.h"
#include "ui_ajouterentretien.h"
#include"entretien.h"
 #include <QDate>

ajouterEntretien::ajouterEntretien(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ajouterEntretien)
{
    ui->setupUi(this);
    ui->dateDE->setDate(QDate::currentDate());
}

ajouterEntretien::~ajouterEntretien()
{
    delete ui;
}



void ajouterEntretien::on_EnregistrerPB_clicked()
{



    QString sexe;
    int id = ui->cinLE->text().toInt();
    QString nom= ui->nomLE->text();
    QString prenom= ui->prenomLE->text();
    QString dateNaissance= ui->naissanceDE->text();
    if (ui->MaleRB->isChecked())
        sexe= "Male";
    else
        sexe="female";
    int numTel= ui->numLE->text().toInt();
    QString adresse= ui->adresseLE->text();
    QString email= ui->emailLE->text();

    QString date= ui->dateDE->text();



    Entretien *e = new Entretien(id,nom,prenom,dateNaissance,sexe,numTel,adresse,email,date,NULL);


    if (e->ajoutEntretien(e))
                QMessageBox::information(0, qApp->tr("Ajout"),
                    qApp->tr("Un nouveau entretien a été ajouté"), QMessageBox::Ok);
            else
                QMessageBox::critical(0, qApp->tr("Ajout"),
                                      qApp->tr("Probléme d'ajout\nVerifier que le CIN et l'email sont uniques et que tout les cases sont remplit"), QMessageBox::Cancel);

     ui->cinLE->clear();
     ui->nomLE->clear();
     ui->prenomLE->clear();
     ui->numLE->clear();
     ui->adresseLE->clear();
     ui->emailLE->clear();
     ui->dateDE->setDate(QDate::currentDate());

}
