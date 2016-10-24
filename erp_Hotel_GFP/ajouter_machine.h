#ifndef AJOUTER_MACHINE_H
#define AJOUTER_MACHINE_H

#include <QDialog>
#include"machine.h"

namespace Ui {
class ajouter_machine;
}

class ajouter_machine : public QDialog
{
    Q_OBJECT
    
public:
    explicit ajouter_machine(QWidget *parent = 0);
    ~ajouter_machine();
    
private slots:



    void on_ajouter_mach_PB_clicked();

    void on_Gere_mach_PB_clicked();

    void on_annuler_PB_clicked();

    void on_id_machine_LE_cursorPositionChanged();

private:
    Ui::ajouter_machine *ui;
    machine tmm;
};

#endif // AJOUTER_MACHINE_H
