#include "ajouterpersonel.h"
#include "ui_ajouterpersonel.h"
#include"Employe.h"
#include<Qstring>
#include<QChar>
#include<QTextEdit>
#include<QLineEdit>
#include<QSqlQuery>
#include"ajouterentretien.h"
#include<QString>
 #include <QDate>
#include"suvipersonel.h"
#include"authentification.h"
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>



AjouterPersonel::AjouterPersonel(QWidget *parent) :
    QDialog(parent),

    ui(new Ui::AjouterPersonel)

{

    ui->setupUi(this);
     ui->employesTV->setModel(tmpE.afficherEmploye());
     ui->arretDE->setVisible(false);
     ui->motifCOB->setVisible(false);
     ui->arretL->setVisible(false);
     ui->motifL->setVisible(false);
      ui->SortieCL->setVisible(false);
      ui->enregistrerPB2->setVisible(false);
     ui->entreeDE->setDate(QDate::currentDate());
     ui->arretDE->setDate(QDate::currentDate());



}

AjouterPersonel::~AjouterPersonel()
{
    delete ui;
}



void AjouterPersonel::on_enregistrerPB_clicked()
{
    int id =ui->RechercherGrhLE->text().toInt();
    QSqlQuery query;
    QString value;
    QString str="select idEmploye from Employe where idEmploye ="+QString::number(id);

     query.exec(str);
     while (query.next()) {
              value = query.value(0).toString();}
              if (value=="")
              {


    QString sexe;
    int id = ui->identifiantLE->text().toInt();
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
    QString fonction= ui->foctionCOB->currentText();
    QString dateEntree= ui->entreeDE->text();



    Employe *e = new Employe(id,nom,prenom,dateNaissance,sexe,numTel,adresse,email,fonction,dateEntree,NULL,NULL);


    if (e->ajoutEmploye(e))
                QMessageBox::information(0, qApp->tr("Ajout"),
                    qApp->tr("Un nouveau employe a été ajouté"), QMessageBox::Ok);
            else
                QMessageBox::critical(0, qApp->tr("Ajout"),
                                      qApp->tr("Probléme d'ajout\nVerifier que l'identifiant, l'email sont uniques et que tout les cases sont remplit"), QMessageBox::Cancel);
     ui->employesTV->setModel(tmpE.afficherEmploye());
     ui->identifiantLE->clear();
     ui->nomLE->clear();
     ui->prenomLE->clear();
     ui->numLE->clear();
     ui->adresseLE->clear();
     ui->emailLE->clear();

}

              else
              {
                  QString sexe;
                  QSqlQuery query;
                  QString str="update Employe set idEmploye = "+QString::QString(ui->identifiantLE->text())+" where (idEmploye ="+QString::number(ui->RechercherGrhLE->text().toInt())+")";

                     query.exec(str);



                      str="update Employe set nom = \42"+QString::QString(ui->nomLE->text())+"\42 where (idEmploye ="+QString::number(ui->RechercherGrhLE->text().toInt())+")";

                        query.exec(str);


                         str="update Employe set prenom = \42"+QString::QString(ui->prenomLE->text())+"\42 where (idEmploye ="+QString::number(ui->RechercherGrhLE->text().toInt())+")";

                           query.exec(str);



                            str="update Employe set dateNaissance = \42"+QString::QString(ui->naissanceDE->text())+"\42 where (idEmploye ="+QString::number(ui->RechercherGrhLE->text().toInt())+")";

                              query.exec(str);

                              if (ui->MaleRB->isChecked())
                                  sexe= "Male";
                              else
                                  sexe="female";



                              str="update Employe set sexe = \42"+sexe+"\42 where (idEmploye ="+QString::number(ui->RechercherGrhLE->text().toInt())+")";

                                query.exec(str);

                                str="update Employe set adresse  = \42"+QString::QString(ui->adresseLE->text())+"\42 where (idEmploye ="+QString::number(ui->RechercherGrhLE->text().toInt())+")";

                                  query.exec(str);

                                  str="update Employe set numTel = "+QString::QString(ui->numLE->text())+" where (idEmploye ="+QString::number(ui->RechercherGrhLE->text().toInt())+")";

                                    query.exec(str);


                                    str="update Employe set email  = \42"+QString::QString(ui->emailLE->text())+"\42 where (idEmploye ="+QString::number(ui->RechercherGrhLE->text().toInt())+")";

                                      query.exec(str);


                                      str="update Employe set dateEntree  = \42"+QString::QString(ui->entreeDE->text())+"\42 where (idEmploye ="+QString::number(ui->RechercherGrhLE->text().toInt())+")";

                                        query.exec(str);

                                        str="update Employe set fonction  = \42"+QString::QString(ui->foctionCOB->currentText())+"\42 where (idEmploye ="+QString::number(ui->RechercherGrhLE->text().toInt())+")";

                                          query.exec(str);



                                          QMessageBox::information(0, qApp->tr("Modification"),
                                              qApp->tr("La modification a été effectuer avec succé"), QMessageBox::Ok);
                                           ui->employesTV->setModel(tmpE.afficherEmploye());


              }






              }





void AjouterPersonel::on_RechercherGrhPB_clicked()
{

    ui->SortieCL->setVisible(true);
    int id =ui->RechercherGrhLE->text().toInt();
    QSqlQueryModel *model =tmpE.rechercherEmploye(id);
    int idRech = model->data(model->index(0, 0)).toInt();
    if(id == idRech)
    {

        ui->employesTV->setModel(model);

    }
     else
    {
        QMessageBox::critical(0, qApp->tr("Recherche"),
            qApp->tr("Employe non trouvé"), QMessageBox::Ok);

    }


    QSqlQuery query;
    QString value;
     QString str="select idEmploye from Employe where idEmploye ="+QString::number(id);

     query.exec(str);
     while (query.next()) {
              value = query.value(0).toString();
      ui->identifiantLE->setText(value);
     }

      str="select nom from Employe where idEmploye ="+QString::number(id);

     query.exec(str);
     while (query.next()) {
               value = query.value(0).toString();
        ui->nomLE->setText(value);
        }

     str="select prenom from Employe where idEmploye ="+QString::number(id);

     query.exec(str);
        while (query.next()) {
                value = query.value(0).toString();
         ui->prenomLE->setText(value);
        }

         str="select dateNaissance from Employe where idEmploye ="+QString::number(id);

        query.exec(str);
           while (query.next()) {
                   value = query.value(0).toString();
                   QChar j1 =value[0];
                   QChar j2=value[1];
                   QString j3=j1;
                   QString j4=j2;
                   QString jj=j3+j2;
                   QChar m1 =value[3];
                   QChar m2=value[4];
                   QString m3=m1;
                   QString m4=m2;
                   QString mm=m3+m2;
                   QChar a1 =value[6];
                   QChar a2=value[7];
                   QChar a3 =value[8];
                   QChar a4=value[9];
                   QString a5=a1;
                   QString a6=a2;
                   QString a7=a3;
                   QString a8=a4;
                   QString aaaa=a5+a6+a7+a8;
                   ui->naissanceDE->setDate(QDate(aaaa.toInt(), mm.toInt(), jj.toInt()));
           }


            str="select adresse from Employe where idEmploye ="+QString::number(id);

           query.exec(str);
              while (query.next()) {
                       value = query.value(0).toString();
               ui->adresseLE->setText(value);
              }



              str="select numTel from Employe where idEmploye ="+QString::number(id);

             query.exec(str);
                while (query.next()) {
                         value = query.value(0).toString();
                 ui->numLE->setText(value);
                }


                str="select email from Employe where idEmploye ="+QString::number(id);

               query.exec(str);
                  while (query.next()) {
                           value = query.value(0).toString();
                   ui->emailLE->setText(value);
                  }

                  str="select dateEntree from Employe where idEmploye ="+QString::number(id);

                 query.exec(str);
                    while (query.next()) {
                            value = query.value(0).toString();
                            QChar j1 =value[0];
                            QChar j2=value[1];
                            QString j3=j1;
                            QString j4=j2;
                            QString jj=j3+j2;
                            QChar m1 =value[3];
                            QChar m2=value[4];
                            QString m3=m1;
                            QString m4=m2;
                            QString mm=m3+m2;
                            QChar a1 =value[6];
                            QChar a2=value[7];
                            QChar a3 =value[8];
                            QChar a4=value[9];
                            QString a5=a1;
                            QString a6=a2;
                            QString a7=a3;
                            QString a8=a4;
                            QString aaaa=a5+a6+a7+a8;
                            ui->entreeDE->setDate(QDate(aaaa.toInt(), mm.toInt(), jj.toInt()));
                    }

                    str="select sexe from Employe where idEmploye ="+QString::number(id);

                   query.exec(str);
                      while (query.next()) {
                               value = query.value(0).toString();}
                      if (value=="Male")
                      {
                    ui->MaleRB->setChecked(true);
                    ui->femaleRB->setChecked(false);
                      }
                      else
                      {
                          ui->MaleRB->setChecked(false);
                          ui->femaleRB->setChecked(true);
                      }


                    str="select fonction from Employe where idEmploye ="+QString::number(id);

                   query.exec(str);
                      while (query.next()) {
                               value = query.value(0).toString();
                       ui->foctionCOB->setCurrentIndex(1);
                       if (value!="")
                       {

                       if (value=="Directeur") ui->foctionCOB->setCurrentIndex(0);
                        else if (value=="Secrétaire") ui->foctionCOB->setCurrentIndex(1);
                        else if (value=="Chef Maintenance") ui->foctionCOB->setCurrentIndex(2);
                         else if (value=="Assistant chef maintenance") ui->foctionCOB->setCurrentIndex(3);
                          else if (value=="Directeur Hébergement") ui->foctionCOB->setCurrentIndex(4);
                           else if (value=="Chef Réception") ui->foctionCOB->setCurrentIndex(5);
                       else if (value=="Réceptioonniste") ui->foctionCOB->setCurrentIndex(6);
                       else if (value=="Chef cuisinier") ui->foctionCOB->setCurrentIndex(7);
                       else if (value=="Assistant du chef cuisinier") ui->foctionCOB->setCurrentIndex(8);
                       else  ui->foctionCOB->setCurrentIndex(9);
}}


                       str="select motifArret from Employe where idEmploye ="+QString::number(id);

                      query.exec(str);
                         while (query.next()) {
                                  value = query.value(0).toString();
                         }
                                  if (value!="")
                                  {
                                      ui->SortieCL->setVisible(false);
                                      ui->arretDE->setVisible(true);
                                      ui->motifCOB->setVisible(true);
                                      ui->arretL->setVisible(true);
                                      ui->motifL->setVisible(true);
                                  if (value=="Fin CDD") ui->motifCOB->setCurrentIndex(0);
                                   else if (value=="Démission") ui->motifCOB->setCurrentIndex(1);
                                   else if (value=="Retraite") ui->motifCOB->setCurrentIndex(2);
                                    else if (value=="Licenciement") ui->motifCOB->setCurrentIndex(3);
                                     else if (value=="Décès") ui->motifCOB->setCurrentIndex(4);
                                      else if (value=="Autre") ui->motifCOB->setCurrentIndex(5);

                                  }
else{

                       ui->arretDE->setVisible(false);
                       ui->motifCOB->setVisible(false);
                       ui->arretL->setVisible(false);
                       ui->motifL->setVisible(false);
                       ui->entreeDE->setDate(QDate::currentDate());}





                      str="select dateArret from Employe where idEmploye ="+QString::number(id);

                     query.exec(str);
                        while (query.next()) {
                                value = query.value(0).toString();
                                if (value!="")
                                {
                                QChar j1 =value[0];
                                QChar j2=value[1];
                                QString j3=j1;
                                QString j4=j2;
                                QString jj=j3+j2;
                                QChar m1 =value[3];
                                QChar m2=value[4];
                                QString m3=m1;
                                QString m4=m2;
                                QString mm=m3+m2;
                                QChar a1 =value[6];
                                QChar a2=value[7];
                                QChar a3 =value[8];
                                QChar a4=value[9];
                                QString a5=a1;
                                QString a6=a2;
                                QString a7=a3;
                                QString a8=a4;
                                QString aaaa=a5+a6+a7+a8;
                                ui->arretDE->setDate(QDate(aaaa.toInt(), mm.toInt(), jj.toInt()));
                        }
                        }









}



void AjouterPersonel::on_supprimerPB_clicked()
{
    int id =ui->RechercherGrhLE->text().toInt();
    QSqlQueryModel *model =tmpE.rechercherEmploye(id);
    int idRech = model->data(model->index(0, 0)).toInt();
    if(id == idRech)
    {
        QString str = " Vous voulez vraiment supprimer \n l'employe ayant l'ID' : "+ ui->RechercherGrhLE->text();
        int ret = QMessageBox::question(this, tr("GRH"),str,QMessageBox::Ok|QMessageBox::Cancel);

        switch (ret) {
          case QMessageBox::Ok:
              if (tmpE.supprimerEmploye(id))
                  QMessageBox ::information(0, qApp->tr("Suppression"),
                                            qApp->tr("L'employé a été supprimé"), QMessageBox::Ok);

              ui->employesTV->setModel(tmpE.afficherEmploye());
              break;
          case QMessageBox::Cancel:

              break;
          default:
              // should never be reached
              break;
        }



    }
     else
    {

        QMessageBox::critical(0, qApp->tr("Suppression"),
            qApp->tr("Employé non trouvé"), QMessageBox::Cancel);

    }


}


void AjouterPersonel::on_nouveauPB_clicked()
{

    ui->arretDE->setVisible(false);
    ui->motifCOB->setVisible(false);
    ui->arretL->setVisible(false);
    ui->motifL->setVisible(false);
}



void AjouterPersonel::on_actualiserPB_clicked()
{
    ui->MaleRB->setChecked(true);

     ui->employesTV->setModel(tmpE.afficherEmploye());
     ui->RechercherGrhLE->clear();
     ui->nomLE->clear();
     ui->prenomLE->clear();
     ui->numLE->clear();
     ui->adresseLE->clear();
     ui->emailLE->clear();
     ui->identifiantLE->clear();
     ui->arretDE->setVisible(false);
     ui->motifCOB->setVisible(false);
     ui->arretL->setVisible(false);
     ui->motifL->setVisible(false);
     ui->SortieCL->setVisible(false);
      ui->naissanceDE->setDate(QDate(2000,01,01));
      ui->entreeDE->setDate(QDate::currentDate());


}


void AjouterPersonel::on_SortieCL_clicked()
{

    ui->arretDE->setVisible(true);
    ui->motifCOB->setVisible(true);
    ui->arretL->setVisible(true);
    ui->motifL->setVisible(true);
    ui->enregistrerPB2->setVisible(true);
    ui->enregistrerPB->setVisible(false);


}


void AjouterPersonel::on_enregistrerPB2_clicked()
{
    QString sexe;
    QSqlQuery query;
    QString str="update Employe set idEmploye = "+QString::QString(ui->identifiantLE->text())+" where (idEmploye ="+QString::number(ui->RechercherGrhLE->text().toInt())+")";

       query.exec(str);



        str="update Employe set nom = \42"+QString::QString(ui->nomLE->text())+"\42 where (idEmploye ="+QString::number(ui->RechercherGrhLE->text().toInt())+")";

          query.exec(str);


           str="update Employe set prenom = \42"+QString::QString(ui->prenomLE->text())+"\42 where (idEmploye ="+QString::number(ui->RechercherGrhLE->text().toInt())+")";

             query.exec(str);



              str="update Employe set dateNaissance = \42"+QString::QString(ui->naissanceDE->text())+"\42 where (idEmploye ="+QString::number(ui->RechercherGrhLE->text().toInt())+")";

                query.exec(str);


                if (ui->MaleRB->isChecked())
                    sexe= "Male";
                else
                    sexe="female";



                str="update Employe set sexe = \42"+sexe+"\42 where (idEmploye ="+QString::number(ui->RechercherGrhLE->text().toInt())+")";

                  query.exec(str);

                  str="update Employe set adresse  = \42"+QString::QString(ui->adresseLE->text())+"\42 where (idEmploye ="+QString::number(ui->RechercherGrhLE->text().toInt())+")";

                    query.exec(str);

                    str="update Employe set numTel = "+QString::QString(ui->numLE->text())+" where (idEmploye ="+QString::number(ui->RechercherGrhLE->text().toInt())+")";

                      query.exec(str);


                      str="update Employe set email  = \42"+QString::QString(ui->emailLE->text())+"\42 where (idEmploye ="+QString::number(ui->RechercherGrhLE->text().toInt())+")";

                        query.exec(str);


                        str="update Employe set dateEntree  = \42"+QString::QString(ui->entreeDE->text())+"\42 where (idEmploye ="+QString::number(ui->RechercherGrhLE->text().toInt())+")";

                          query.exec(str);

                          str="update Employe set fonction  = \42"+QString::QString(ui->foctionCOB->currentText())+"\42 where (idEmploye ="+QString::number(ui->RechercherGrhLE->text().toInt())+")";

                            query.exec(str);



                             str="update Employe set dateArret = \42"+QString::QString(ui->arretDE->text())+"\42 where (idEmploye ="+QString::number(ui->RechercherGrhLE->text().toInt())+")";

                               query.exec(str);



                                str="update Employe set motifArret = \42"+QString::QString(ui->motifCOB->currentText())+"\42 where (idEmploye ="+QString::number(ui->RechercherGrhLE->text().toInt())+")";

                                  query.exec(str);





  QMessageBox::information(0, qApp->tr("Modification"),
      qApp->tr("La modification a été effectuer avec succé"), QMessageBox::Ok);

  ui->employesTV->setModel(tmpE.afficherEmploye());




}





void AjouterPersonel::on_deconnectionPB_clicked()
{
    authentification *w=new authentification();
        w->show();
        this->hide();
}
