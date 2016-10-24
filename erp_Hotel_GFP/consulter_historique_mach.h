#ifndef CONSULTER_HISTORIQUE_MACH_H
#define CONSULTER_HISTORIQUE_MACH_H

#include <QDialog>
#include"machine.h"
namespace Ui {
class consulter_historique_mach;
}

class consulter_historique_mach : public QDialog
{
    Q_OBJECT
    
public:
    explicit consulter_historique_mach(QWidget *parent = 0);
    ~consulter_historique_mach();
    
private slots:

    void on_panne_machines_PB_clicked();

    void on_recherche_panne_pb_clicked();

    void on_planif_ent_pb_clicked();

    void on_menu_clicked();

private:
    Ui::consulter_historique_mach *ui;
    machine tmm;
};

#endif // CONSULTER_HISTORIQUE_MACH_H
