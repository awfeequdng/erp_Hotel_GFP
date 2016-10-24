#include "consulter_historique_mach.h"
#include "ui_consulter_historique_mach.h"
#include"menu_chef.h"

#include"QDebug"
#include <QStandardItemModel>
#include <QtSql>
#include "QTableView"
#include"machine.h"
#include"planifier_ent_machines.h"
#include"QString"
#include <QStandardItemModel>
#include <QtSql>
#include "QTableView"
#include "QDebug"
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlError>

consulter_historique_mach::consulter_historique_mach(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::consulter_historique_mach)
{
    ui->setupUi(this);
     ui->tableView->setModel(tmm.afficherMachine());
     ui->tableView_2->hide();
     ui->label_2->hide();
     ui->label_3->hide();
     ui->type__LE->hide();
     ui->recherche_panne_pb->hide();
     ui->planif_ent_pb->hide();
}

consulter_historique_mach::~consulter_historique_mach()
{
    delete ui;
}


void consulter_historique_mach::on_panne_machines_PB_clicked()
{

    ui->label_2->show();
    ui->label_3->show();
    ui->type__LE->show();
    ui->recherche_panne_pb->show();
}



void consulter_historique_mach::on_recherche_panne_pb_clicked()
{
    QString rech=ui->type__LE->text();
    QSqlQueryModel *model =tmm.rechercherMachine(rech);
    QString machRECH = model->data(model->index(0, 0)).toString();
    if(machRECH==rech)

    {

ui->tableView_2->show();
    ui->planif_ent_pb->show();
    ui->tableView_2->setModel(tmm.rechercherMachine(rech));
        }

     else
    {

        QMessageBox::critical(0, qApp->tr("recherche"),
            qApp->tr("machine non trouvé"), QMessageBox::Cancel);
    }
}

void consulter_historique_mach::on_planif_ent_pb_clicked()
{
    planifier_ent_machines *w=new planifier_ent_machines();
         w->show();
         this->hide();
}

void consulter_historique_mach::on_menu_clicked()
{
    menu_chef *w=new menu_chef();
        w->show();
        this->hide();
}
