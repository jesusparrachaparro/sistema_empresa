#include "interfazeliminar.h"
#include "ui_interfazeliminar.h"
#include "eliminar.h"

InterfazEliminar::InterfazEliminar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InterfazEliminar)
{
    ui->setupUi(this);
    ui->eliminado->setVisible(false);
    ui->noencontrado->setVisible(false);
}

InterfazEliminar::~InterfazEliminar()
{
    delete ui;
}

void InterfazEliminar::on_ok_clicked()
{
    ui->eliminado->setVisible(false);
    ui->noencontrado->setVisible(false);
    QString filtro = ui->filtro->text(); string filtrox = filtro.toStdString();
    eliminar elimino=eliminar();
    int cont = elimino.eliminar_datos(filtrox);
    if(cont==1){
        ui->eliminado->setVisible(true);
    }else{
        ui->noencontrado->setVisible(true);
    }

}
