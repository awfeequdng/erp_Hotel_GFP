#include "ajouter_machine.h"
#include "ui_ajouter_machine.h"
#include"machine.h"

#include <QDialog>
#include"machines.h"
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
ajouter_machine::ajouter_machine(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ajouter_machine)
{
    ui->setupUi(this);
    ui->tableView->hide();

}

ajouter_machine::~ajouter_machine()
{
    delete ui;
}



void ajouter_machine::on_ajouter_mach_PB_clicked()
{QString id_machine,panne,marque,remarques,date_fabrication,type;
    id_machine=ui->id_machine_LE->toPlainText();
    type=ui->type_LE->toPlainText();
     marque=ui->marque_LE->toPlainText();
    date_fabrication=ui->date_fabrication_2->text();
    remarques=ui->remarques_LE->toPlainText();

 //Control de saisie des machines

     if (ui->id_machine_LE->toPlainText().isEmpty())
         {
         QMessageBox::warning(this,"Erreur","Vous devez saisir id_machine !");
          ui->id_machine_LE->setFocus(Qt::OtherFocusReason);
          ui->id_machine_LE->setStyleSheet("background-color:#FF0000;");
          return;
         }


     if (ui->type_LE->toPlainText().isEmpty())
         {
         QMessageBox::warning(this,"Erreur","Vous devez saisir une type !");
          ui->type_LE->setFocus(Qt::OtherFocusReason);
          ui->type_LE->setStyleSheet("background-color:#FF0000;");
          return;
         }


      if (ui->marque_LE->toPlainText().isEmpty())
         {
         QMessageBox::warning(this,"Erreur","Vous devez saisir la marque !");
          ui->marque_LE->setFocus(Qt::OtherFocusReason);
          ui->marque_LE->setStyleSheet("background-color:#FF0000;");
          return;
         }


      if (ui->date_fabrication_2->text().isEmpty())
          {
          QMessageBox::warning(this,"Erreur","Vous devez saisir date de fabrication !");
           ui->date_fabrication_2->setFocus(Qt::OtherFocusReason);
           ui->date_fabrication_2->setStyleSheet("background-color:#FF0000;");
           return;
          }


      if (ui->remarques_LE->toPlainText().isEmpty())
          {
          QMessageBox::warning(this,"Erreur","Vous devez saisir une remarque !");
           ui->remarques_LE->setFocus(Qt::OtherFocusReason);
           ui->remarques_LE->setStyleSheet("background-color:#FF0000;");
           return;
          }


      machine*m = new machine(id_machine,type,marque,remarques,date_fabrication,panne);
 if (m->ajoutMachine(m))
     QMessageBox::information(0, qApp->tr("Ajout"),
         qApp->tr("Une nouvelle machine a été ajouté"), QMessageBox::Ok);
 else
     QMessageBox::critical(0, qApp->tr("Ajout"),
         qApp->tr("Probléme d'ajout ou bien id machine existe deja"), QMessageBox::Cancel);


}

void ajouter_machine::on_Gere_mach_PB_clicked()
{
    machines *w=new machines();
        w->show();
        this->hide();

}

void ajouter_machine::on_annuler_PB_clicked()
{
    this->ui->id_machine_LE->clear();
    this->ui->type_LE->clear();
    this->ui->marque_LE->clear();
    this->ui->remarques_LE->clear();
    this->ui->date_fabrication_2->clear();
}

void ajouter_machine::on_id_machine_LE_cursorPositionChanged()
{  ui->tableView->show();
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("select id_machine 'les id des \n machines \n disponible' from machines");
      ui->tableView->setModel(model);

}
