#ifndef AJOUTERENTRETIEN_H
#define AJOUTERENTRETIEN_H
#include"Employe.h"

#include <QDialog>

namespace Ui {
class ajouterEntretien;
}

class ajouterEntretien : public QDialog
{
    Q_OBJECT
    
public:
    explicit ajouterEntretien(QWidget *parent = 0);
    ~ajouterEntretien();
    
private slots:


    void on_EnregistrerPB_clicked();

private:
    Ui::ajouterEntretien *ui;
     Employe tmpE;
};

#endif // AJOUTERENTRETIEN_H
