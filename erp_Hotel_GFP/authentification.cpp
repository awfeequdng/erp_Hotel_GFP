#include "authentification.h"
#include "ui_authentification.h"
#include"menu_chef.h"
#include"menu_tech.h"
#include"grh_directeur.h"
#include"secretaire.h"
#include"menuresvente.h"
#include"stockrechange.h"
#include"connection.h"
authentification::authentification(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::authentification)
{
    ui->setupUi(this);
    if(createConnection())
    { ui->stat->setText("connecté à la base de données ");
    }
}

authentification::~authentification()
{
    delete ui;
}


void authentification::on_connexion_clicked()
    {QString login,motdepasse;
    login=ui->login->text();
        motdepasse=ui->motdepasse->text();
        if(motdepasse=="chef" && login=="chef")
        {
            menu_chef *w=new menu_chef();
            w->show();
            this->hide();


        }
        else
            if(motdepasse=="tech" && login=="tech")
            {
                menu_tech *w=new menu_tech();
                w->show();
                this->hide();


            }
            else
                if(motdepasse=="grh" && login=="grh")
                {
                    GRH_directeur *w=new GRH_directeur();
                    w->show();
                    this->hide();

                }
                else
                    if(motdepasse=="sec" && login=="sec")
                    {
                        secretaire *w=new secretaire();
                        w->show();
                        this->hide();

                    }
                    else
                        if(motdepasse=="vente" && login=="vente")
                        {
                            menuResVente *w=new menuResVente();
                            w->show();
                            this->hide();

                        }
                        else
                            if(motdepasse=="stock" && login=="stock")
                            {
                                stockrechange *w=new stockrechange();
                                w->show();
                                this->hide();

                            }

else ui->stat->setText("combinaison login et mot de passe incorrect ");

    }





void authentification::on_check_2_stateChanged(int arg1)
{


        if(ui->check_2->isChecked()){ui->motdepasse->setEchoMode(QLineEdit::Normal);}

        else ui->motdepasse->setEchoMode(QLineEdit::Password);
    }



