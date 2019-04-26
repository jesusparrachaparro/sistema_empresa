#ifndef INTERFAZPERSONAL_H
#define INTERFAZPERSONAL_H

#include <QDialog>
#include <interfazanadir.h>
#include <interfazconsultar.h>
#include <interfazeliminar.h>

namespace Ui {
class InterfazPersonal;
}

class InterfazPersonal : public QDialog
{
    Q_OBJECT

public:
    explicit InterfazPersonal(QWidget *parent = 0);
    ~InterfazPersonal();

private slots:
    void on_consultar_clicked();

    void on_anadir_clicked();

    void on_eliminar_clicked();

private:
    Ui::InterfazPersonal *ui;
};

#endif // INTERFAZPERSONAL_H
