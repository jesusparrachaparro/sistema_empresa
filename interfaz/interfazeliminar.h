#ifndef INTERFAZELIMINAR_H
#define INTERFAZELIMINAR_H

#include <QDialog>

namespace Ui {
class InterfazEliminar;
}

class InterfazEliminar : public QDialog
{
    Q_OBJECT

public:
    explicit InterfazEliminar(QWidget *parent = 0);
    ~InterfazEliminar();

private slots:
    void on_ok_clicked();

private:
    Ui::InterfazEliminar *ui;
};

#endif // INTERFAZELIMINAR_H
