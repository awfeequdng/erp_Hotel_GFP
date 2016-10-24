#include "ajouter_entretien_mach.h"
#include "ui_ajouter_entretien_mach.h"
#include "cl_etretien_machies.h"
#include"recevoire_plan_de_travail.h"
#include"menu_chef.h"
#include "QDebug"
#include"QString"
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include"QGraphicsView"
#include"planifier_ent_machines.h"
ajouter_entretien_mach::ajouter_entretien_mach(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ajouter_entretien_mach)
{
    ui->setupUi(this);
    combomachines();
    combotech();
    ui->entretiens_tableView->hide();
}

ajouter_entretien_mach::~ajouter_entretien_mach()
{
    delete ui;
}

void ajouter_entretien_mach::combomachines()
{
    ui->id_mach_2_CB->clear();
    QSqlQuery req;
    req.prepare("select * from MACHINES");
    if( !req.exec() )
    {

        QMessageBox::critical(0, qApp->tr("Cannot open database"),
            qApp->tr("impossible de passer la requete.\n"

                     "Click Cancel to exit."), QMessageBox::Cancel);
    }
    ui->id_mach_2_CB->insertItem(-1,"");
    while (req.next())
    {
        ui->id_mach_2_CB->insertItem(-1,req.value(0).toString());

    }
}


void ajouter_entretien_mach::combotech()
{
    ui->id_tech_CB->clear();
    QSqlQuery req;
    req.prepare("select * from Employe where fonction='Assistant chef maintenance'");
    if( !req.exec() )
    {

        QMessageBox::critical(0, qApp->tr("Cannot open database"),
            qApp->tr("impossible de passer la requete.\n"

                     "Click Cancel to exit."), QMessageBox::Cancel);
    }
    ui->id_tech_CB->insertItem(-1,"");
    while (req.next())
    {
        ui->id_tech_CB->insertItem(-1,req.value(0).toString());

    }
}




void ajouter_entretien_mach::on_menu_Pb_clicked()
{
   planifier_ent_machines *w=new planifier_ent_machines();
         w->show();
         this->hide();
}


void ajouter_entretien_mach::on_actualise_clicked()
{
   on_id_entretien_LE_cursorPositionChanged();
}



void ajouter_entretien_mach::on_envoye_PB_clicked()
{
    QString id_mach,date,remarques,id_entretien,tach_afaire,technicien_responsable;
           id_mach=ui->id_mach_2_CB->currentText();
            id_entretien=ui->id_entretien_LE->toPlainText();
             remarques=ui->remarques_LE->toPlainText();;
             tach_afaire=ui->tach_afaire_LE->toPlainText();
            date=ui->date_ent->text();
            technicien_responsable=ui->id_tech_CB->currentText();

            //Control de saisie des entretien

                if (ui->date_ent->text().isEmpty())
                    {
                    QMessageBox::warning(this,"Erreur","Vous devez saisir date_entretien !");
                     ui->date_ent->setFocus(Qt::OtherFocusReason);
                     ui->date_ent->setStyleSheet("background-color:#FF0000;");
                     return;
                    }


                if (ui->id_mach_2_CB->currentText().isEmpty())
                    {
                    QMessageBox::warning(this,"Erreur","Vous devez saisir id_mach_2 !");
                     ui->id_mach_2_CB->setFocus(Qt::OtherFocusReason);
                     ui->id_mach_2_CB->setStyleSheet("background-color:#FF0000;");
                     return;
                    }


                 if (ui->tach_afaire_LE->toPlainText().isEmpty())
                    {
                    QMessageBox::warning(this,"Erreur","Vous devez saisir tach_afaire!");
                     ui->tach_afaire_LE->setFocus(Qt::OtherFocusReason);
                     ui->tach_afaire_LE->setStyleSheet("background-color:#FF0000;");
                     return;
                    }


                 if (ui->id_tech_CB->currentText().isEmpty())
                     {
                     QMessageBox::warning(this,"Erreur","Vous devez saisir id_tech !");
                      ui->id_tech_CB->setFocus(Qt::OtherFocusReason);
                      ui->id_tech_CB->setStyleSheet("background-color:#FF0000;");
                      return;
                     }


                 if (ui->id_entretien_LE->toPlainText().isEmpty())
                     {
                     QMessageBox::warning(this,"Erreur","Vous devez saisir id_entretien !");
                      ui->id_entretien_LE->setFocus(Qt::OtherFocusReason);
                      ui->id_entretien_LE->setStyleSheet("background-color:#FF0000;");
                      return;
                     }
                 if (ui->remarques_LE->toPlainText().isEmpty())
                     {
                     QMessageBox::warning(this,"Erreur","Vous devez saisir les remarques !");
                      ui->remarques_LE->setFocus(Qt::OtherFocusReason);
                      ui->remarques_LE->setStyleSheet("background-color:#FF0000;");
                      return;
                     }


       // fin controle de saisie

            CL_etretien_machies*m = new CL_etretien_machies(id_entretien,date,id_mach,tach_afaire,technicien_responsable,remarques);
       if (m->ajoutEntretien(m))
           QMessageBox::information(0, qApp->tr("Ajout"),
               qApp->tr("Un nouveau etretien a été ajouté"), QMessageBox::Ok);
       else
           QMessageBox::critical(0, qApp->tr("Ajout"),
               qApp->tr("Probléme d'ajout"), QMessageBox::Cancel);
}

void ajouter_entretien_mach::on_id_entretien_LE_cursorPositionChanged()
{
    ui->entretiens_tableView->show();
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("select id_entretien 'les id des entretiens disponible' from planification_ent_machine");
      ui->entretiens_tableView->setModel(model);

}

void ajouter_entretien_mach::on_id_mach_2_CB_highlighted(const QString &arg1)
{ ui->entretiens_tableView->show();
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("select id_machine,type from MACHINES");

      ui->entretiens_tableView->setModel(model);

}

void ajouter_entretien_mach::on_id_tech_CB_highlighted(const QString &arg1)
{ui->entretiens_tableView->show();
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("select IdEmploye,nom  from Employe where fonction='Assistant chef maintenance'");
      ui->entretiens_tableView->setModel(model);

}
