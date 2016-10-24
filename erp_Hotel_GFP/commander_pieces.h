#ifndef COMMANDER_PIECES_H
#define COMMANDER_PIECES_H

#include <QDialog>

namespace Ui {
class commander_pieces;
}

class commander_pieces : public QDialog
{
    Q_OBJECT
    
public:
    void comboArticles();
    explicit commander_pieces(QWidget *parent = 0);
    ~commander_pieces();
    void comboChef();
    
private slots:

    void on_commander_pb_clicked();

    void on_annuler_cmd_pb_clicked();

    void on_menu_pb_clicked();

private:
    Ui::commander_pieces *ui;
};

#endif // COMMANDER_PIECES_H
