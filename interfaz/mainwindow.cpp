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

void MainWindow::on_personal_clicked()
{
    InterfazPersonal *ventana1 = new InterfazPersonal();
    ventana1->setModal(true);
    ventana1->show();
}


void MainWindow::on_inventario_clicked()
{
    InterfazOrdenes *ventana2 = new InterfazOrdenes();
    ventana2->setModal(true);
    ventana2->show();
}

