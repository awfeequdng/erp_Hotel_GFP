#include "commander_pieces.h"
#include "ui_commander_pieces.h"
#include"menu_chef.h"

#include<QString>
#include"QDebug"
#include <QStandardItemModel>
#include <QtSql>
#include "QTableView"
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>

commander_pieces::commander_pieces(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::commander_pieces)
{
    ui->setupUi(this);
    ui->tableView->show();
    QSqlQueryModel * model= new QSqlQueryModel();
      model->setQuery("select * from ARTICLE ");
      ui->tableView->setModel(model);
    comboArticles();
    ui->qte_sBox->clear();
    comboChef();

}

commander_pieces::~commander_pieces()
{
    delete ui;
}



void commander_pieces::comboArticles()
{
    ui->articles_CB->clear();
    QSqlQuery req;
    req.prepare("select * from ARTICLE");
    if( !req.exec() )
    {

        QMessageBox::critical(0, qApp->tr("Cannot open database"),
            qApp->tr("impossible de passer la requete.\n"

                     "Click Cancel to exit."), QMessageBox::Cancel);
    }
    ui->articles_CB->insertItem(-1,"");
    while (req.next())
    {
        ui->articles_CB->insertItem(-1,req.value(0).toString());

    }
}

void commander_pieces::on_commander_pb_clicked()
{
    int articles,qte,id_cmd ;
    QString id_chef;
    QString date;

        articles=ui->articles_CB->currentText().toInt();
          qte=ui->qte_sBox->text().toInt();
          id_cmd=ui->id_cmd_LE->text().toInt();
          date=ui->date_cmd->text();
          id_chef=ui->id_chef_cb->currentText();

          //Control de saisie

              if (ui->articles_CB->currentText().isEmpty())
                  {
                  QMessageBox::warning(this,"Erreur","Vous devez selectionner un article !");
                   ui->articles_CB->setFocus(Qt::OtherFocusReason);
                   ui->articles_CB->setStyleSheet("background-color:#FF0000;");
                   return;
                  }
              if (ui->qte_sBox->text().isEmpty())
                  {
                  QMessageBox::warning(this,"Erreur","Vous devez saisir le qte !");
                   ui->qte_sBox->setFocus(Qt::OtherFocusReason);
                   ui->qte_sBox->setStyleSheet("background-color:#FF0000;");
                   return;
                  }
              if (ui->id_cmd_LE->text().isEmpty())
                  {
                  QMessageBox::warning(this,"Erreur","Vous devez saisir Id_cmd !");
                   ui->id_cmd_LE->setFocus(Qt::OtherFocusReason);
                   ui->id_cmd_LE->setStyleSheet("background-color:#FF0000;");
                   return;
                  }
             QSqlQuery query;


             if (query.exec ("insert into Utiliser(quantiteU,id_Article) values('"+QString::number(qte)+"','"+QString::number(articles)+"')"))
                { query.exec ("insert into Demande values('"+QString::number(id_cmd)+"','"+date+"','"+id_chef+"')");
                 QMessageBox::information(0, qApp->tr("database"),
                     qApp->tr("commande creé avec succès"), QMessageBox::Cancel);
             }

                 else
                 QMessageBox::information(0, qApp->tr("database"),
                         qApp->tr("no item added"), QMessageBox::Cancel);

}

void commander_pieces::on_annuler_cmd_pb_clicked()
{QString articles,qte ;
    this->ui->articles_CB->clear();
      this->ui->qte_sBox->clear();

}

void commander_pieces::on_menu_pb_clicked()
{
    menu_chef *w=new menu_chef();
        w->show();
        this->hide();
}

void commander_pieces::comboChef()
{
    ui->id_chef_cb->clear();
    QSqlQuery req;
    req.prepare("select * from Employe where fonction='Chef Maintenance'");
    if( !req.exec() )
    {

        QMessageBox::critical(0, qApp->tr("Cannot open database"),
            qApp->tr("impossible de passer la requete.\n"

                     "Click Cancel to exit."), QMessageBox::Cancel);
    }
    ui->id_chef_cb->insertItem(-1,"");
    while (req.next())
    {
        ui->id_chef_cb->insertItem(-1,req.value(0).toString());

    }
}
