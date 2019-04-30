#include "interfazeliminar.h"
#include "ui_interfazeliminar.h"
#include "eliminar.h"

InterfazEliminar::InterfazEliminar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InterfazEliminar)
{
    ui->setupUi(this);
    ui->eliminado->setVisible(false);
}

InterfazEliminar::~InterfazEliminar()
{
    delete ui;
}

void InterfazEliminar::on_ok_clicked()
{
    QString filtro = ui->filtro->text(); string filtrox = filtro.toStdString();
    eliminar elimino=eliminar();
    elimino.eliminar_datos(filtrox);
    ui->eliminado->setVisible(true);

}

