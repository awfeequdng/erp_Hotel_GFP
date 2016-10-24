#ifndef AUTHENTIFICATION_H
#define AUTHENTIFICATION_H

#include <QMainWindow>

namespace Ui {
class authentification;
}

class authentification : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit authentification(QWidget *parent = 0);
    ~authentification();
    
private slots:
    void on_connexion_clicked();

    void on_check_2_stateChanged(int arg1);

private:
    Ui::authentification *ui;
};

#endif // AUTHENTIFICATION_H
