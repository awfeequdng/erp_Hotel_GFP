#ifndef AJOUTER_CLIENT_H
#define AJOUTER_CLIENT_H
#include <QMainWindow>
#include "client.h"
#include <QDialog>

namespace Ui {
class ajouter_client;
}

class ajouter_client : public QDialog
{
    Q_OBJECT
    
public:
    explicit ajouter_client(QWidget *parent = 0);
    ~ajouter_client();
    
private slots:
    void on_enregistrer_Pb_clicked();

private:
    Ui::ajouter_client *ui;
    client tmpCl;
};

#endif // AJOUTER_CLIENT_H
