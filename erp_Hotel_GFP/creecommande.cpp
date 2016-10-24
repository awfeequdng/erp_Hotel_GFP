#include "creecommande.h"
#include "ui_creecommande.h"
#include <QByteArray>
#include <QTableWidget>
#include<QString>
#include"Article.h"
#include"commandes.h"
#include<QSpinBox>
#include<QPainter>
#include<QPrinter>
#include<QMessageBox>
#include"passercmd.h"
creecommande::creecommande(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::creecommande)
{
    ui->setupUi(this);
    ui->articleCB->setModel(art.Actualiser_idArticle());
    ui->cmdnumLE->setText(QString::number(cmd.idcmdmax()));

}

creecommande::~creecommande()
{
    delete ui;
}


void creecommande::on_ajouter_clicked()
{
    int ida,idc,qte;
    ida=ui->articleCB->currentText().toInt();
    idc=ui->cmdnumLE->text().toInt();
    qte=ui->QuantiteLE->text().toInt();
    Commandes *c=new Commandes(idc,ida,qte);


    c->AjouterArticle_cmd();
    ui->tableView->setModel(c->AfficherCmd());
    //ui->QuantiteLE->setStyleSheet("background: red ");
}

void creecommande::on_articleCB_currentIndexChanged(const QString &arg1)
{
    ui->libelleLE->setText( art.TrouverLibelle(ui->articleCB->currentText().toInt()));

}




void creecommande::on_QuantiteLE_textChanged(const QString &arg1)
{

      QString qte=ui->QuantiteLE->text();
      if((qte[qte.length()].toAscii()<toascii(0))&& qte[qte.length()].toAscii()>toascii(9))
          ui->QuantiteLE->backspace();


}





void creecommande::on_TerminerPB_clicked()
{int idc;

    idc=ui->cmdnumLE->text().toInt();

    Commandes *c=new Commandes(idc);

    c->creecmd();

 ui->cmdnumLE->setText(QString::number(cmd.idcmdmax()));
QMessageBox::information(this,"Information"," Commande crée ");
ui->cmdnumLE->setText(QString::number(cmd.idcmdmax()));

}



void creecommande::on_SupprimerPB_clicked()
{int ida,idc,qte;
    ida=ui->articleCB->currentText().toInt();
    idc=ui->cmdnumLE->text().toInt();
    qte=ui->QuantiteLE->text().toInt();
    Commandes *c=new Commandes(idc,ida,qte);

    c->supprimerArticle_cmd();
    ui->tableView->setModel(c->AfficherCmd());

}



void creecommande::on_passercmdPB_clicked()
{
    { passercmd *x=new passercmd();
        x->show();

    }
}
