#ifndef CONSULTERSR_H
#define CONSULTERSR_H

#include <QWidget>
#include "Article.h"
namespace Ui {
class consultersr;
}

class consultersr : public QWidget
{
    Q_OBJECT
    
public:
    explicit consultersr(QWidget *parent = 0);
    ~consultersr();
    


private slots:
    void on_consulter_clicked();

    void on_RechercherPB_clicked();

    void on_tabWidget_currentChanged(QWidget *arg1);

private:
    Ui::consultersr *ui;
    Article art;
};

#endif // CONSULTERSR_H
