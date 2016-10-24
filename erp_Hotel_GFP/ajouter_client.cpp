#include "ajouter_client.h"
#include "ui_ajouter_client.h"
#include "client.h"
#include "QSqlQuery"
#include "QMessageBox"
#include "QDebug"

ajouter_client::ajouter_client(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ajouter_client)
{
    ui->setupUi(this);
}

ajouter_client::~ajouter_client()
{
    delete ui;
}

void ajouter_client::on_enregistrer_Pb_clicked()
{
    QString nom= ui->nom_le->text();
    QString prenom=ui->prenom_le->text();
    QString naissance=ui->naissance_le->text();
    int cin=ui->cin_le->text().toInt();
    int tel=ui->phone_le->text().toInt();
    QString adresse=ui->adresse_le->text();
    QString sejour=ui->sejour_le->text();
    client*cl = new client(nom,prenom,naissance,cin,tel,adresse,sejour);
    if (cl->enregistrer_client(cl))
        QMessageBox::information(0, qApp->tr("Enregistrer"),
            qApp->tr("Un nouveau client est ajouté"), QMessageBox::Ok);
    else
        QMessageBox::critical(0, qApp->tr("Enregistrer"),
            qApp->tr("Problème d'enregistrement"), QMessageBox::Cancel);


}
