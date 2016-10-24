#include "consultersr.h"
#include "ui_consultersr.h"
#include<QString>
#include "QMessageBox"
#include<QSqlQuery>

#include<QSqlQueryModel>
#include"Article.h"

consultersr::consultersr(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::consultersr)
{
    ui->setupUi(this);

}

consultersr::~consultersr()
{
    delete ui;
}


void consultersr::on_consulter_clicked()
{

   QString t=ui->tri->currentText();
   QString ty=ui->typetri->currentText();

   ui->tableView->setModel(art.Afficher(t,ty));

}

void consultersr::on_RechercherPB_clicked()
{int id=ui->ida->text().toInt();
    ui->tableView->setModel(art.Rechercher_Afficher(id));

}

void consultersr::on_tabWidget_currentChanged(QWidget *arg1)
{
   ui->tableView->setModel(NULL);
}
