#ifndef AJOUTER_ENTRETIEN_MACH_H
#define AJOUTER_ENTRETIEN_MACH_H

#include <QDialog>

namespace Ui {
class ajouter_entretien_mach;
}

class ajouter_entretien_mach : public QDialog
{
    Q_OBJECT
    
public:
   virtual void combomachines();
   virtual void combotech();
    explicit ajouter_entretien_mach(QWidget *parent = 0);
    ~ajouter_entretien_mach();
    
private slots:



   void on_menu_Pb_clicked();



    void on_actualise_clicked();

    void on_envoye_PB_clicked();

    void on_id_entretien_LE_cursorPositionChanged();

    void on_id_mach_2_CB_highlighted(const QString &arg1);

    void on_id_tech_CB_highlighted(const QString &arg1);

private:
    Ui::ajouter_entretien_mach *ui;
};

#endif // AJOUTER_ENTRETIEN_MACH_H
