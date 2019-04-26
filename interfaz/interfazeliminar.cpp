#include "interfazeliminar.h"
#include "ui_interfazeliminar.h"

InterfazEliminar::InterfazEliminar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InterfazEliminar)
{
    ui->setupUi(this);
}

InterfazEliminar::~InterfazEliminar()
{
    delete ui;
}
