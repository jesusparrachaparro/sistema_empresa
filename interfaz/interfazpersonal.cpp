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

// En esta interfaz existen tres opciones a ejecutar: consultar datos, añadir datos y eliminar datos de la base de datos.
// Esta base de datos se guarda en un fichero de texto, por lo que estas opciones tendrán interacción directa con él.

void InterfazPersonal::on_consultar_clicked()
{
    InterfazConsultar *ventana2 = new InterfazConsultar(); // Se crea la ventana de consultar datos
    ventana2->setModal(true); // Se bloquea la interacción con otras ventanas para evitar errores
    ventana2->show();
}

void InterfazPersonal::on_anadir_clicked()
{
    InterfazAnadir *ventana3 = new InterfazAnadir(); // Se crea la ventana de añadir datos
    ventana3->setModal(true); // Se bloquea la interacción con otras ventanas para evitar errores
    ventana3->show();
}

void InterfazPersonal::on_eliminar_clicked()
{
    InterfazEliminar *ventana4 = new InterfazEliminar(); // Se crea la ventana de eliminar datos
    ventana4->setModal(true); // Se bloquea la interacción con otras ventanas para evitar errores
    ventana4->show();
}
