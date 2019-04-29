#ifndef INTERFAZORDENES_H
#define INTERFAZORDENES_H

#include <QDialog>

namespace Ui {
class InterfazOrdenes;
}

class InterfazOrdenes : public QDialog
{
    Q_OBJECT

public:
    explicit InterfazOrdenes(QWidget *parent = 0);
    ~InterfazOrdenes();

private slots:
    void on_crear_clicked();

private:
    Ui::InterfazOrdenes *ui;
};

#endif // INTERFAZORDENES_H
