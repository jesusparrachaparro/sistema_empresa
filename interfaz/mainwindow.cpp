#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

// La interfaz principal se divide en dos vertientes: PERSONAL y ÓRDENES
// Dependiendo de cual de los dos botones se pulse, se abrirán distintas interfaces con múltiples opciones

void MainWindow::on_personal_clicked()
{
    InterfazPersonal *ventana1 = new InterfazPersonal(); // Se crea la ventana de personal
    ventana1->setModal(true); // Se bloquea la interacción con otras ventanas para evitar errores
    ventana1->show();
}


void MainWindow::on_inventario_clicked()
{
    InterfazOrdenes *ventana2 = new InterfazOrdenes(); // Se crea la ventana de órdenes
    ventana2->setModal(true); // Se bloquea la interacción con otras ventanas para evitar errores
    ventana2->show();
}
