#include "interfazeliminar.h"
#include "ui_interfazeliminar.h"
#include "eliminar.h"

InterfazEliminar::InterfazEliminar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InterfazEliminar)
{
    ui->setupUi(this);
    // Se inicializan elementos de la interfaz como no visibles
    ui->eliminado->setVisible(false);
    ui->noencontrado->setVisible(false);
}

InterfazEliminar::~InterfazEliminar()
{
    delete ui;
}

// En esta opción el usuario debe introducir el DNI como filtro para encontrar el trabajador del cual se quieren eliminar
// sus datos. Estos datos se leerán del fichero principal y se eliminarán al pulsar el botón de OK, mostrando un mensaje por
// pantalla verificándolo.

void InterfazEliminar::on_ok_clicked()
{
    // Se inicializan los mensajes de aviso de la interfaz como no visibles
    ui->eliminado->setVisible(false);
    ui->noencontrado->setVisible(false);
    // Se guarda el DNI en una variable para utilizarlo en la función de eliminar
    QString filtro = ui->filtro->text(); string filtrox = filtro.toStdString();
    // Se llama a la función eliminar
    eliminar elimino = eliminar();
    int cont = elimino.eliminar_datos(filtrox);
    // Dependiendo del valor del contador se muestra si el usuario ha sido eliminado o si no se ha encontrado
    if(cont==1){
        ui->eliminado->setVisible(true);
    }else{
        ui->noencontrado->setVisible(true);
    }

}
