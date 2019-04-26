#include "interfazpersonal.h"
#include "ui_interfazpersonal.h"

InterfazPersonal::InterfazPersonal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InterfazPersonal)
{
    ui->setupUi(this);
}

InterfazPersonal::~InterfazPersonal()
{
    delete ui;
}

void InterfazPersonal::on_consultar_clicked()
{
    InterfazConsultar *ventana2 = new InterfazConsultar();
    ventana2->setModal(true);
    ventana2->show();
}

void InterfazPersonal::on_anadir_clicked()
{
    InterfazAnadir *ventana3 = new InterfazAnadir();
    ventana3->setModal(true);
    ventana3->show();
}

void InterfazPersonal::on_eliminar_clicked()
{
    InterfazEliminar *ventana4 = new InterfazEliminar();
    ventana4->setModal(true);
    ventana4->show();
}
