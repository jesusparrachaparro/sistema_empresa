#ifndef INTERFAZCONSULTAR_H
#define INTERFAZCONSULTAR_H

#include <QDialog>
#include "consultar.h"

namespace Ui {
class InterfazConsultar;
}

class InterfazConsultar : public QDialog
{
    Q_OBJECT

public:
    explicit InterfazConsultar(QWidget *parent = 0);
    ~InterfazConsultar();

private slots:
    void on_buscar_clicked();

private:
    Ui::InterfazConsultar *ui;
};

#endif // INTERFAZCONSULTAR_H
