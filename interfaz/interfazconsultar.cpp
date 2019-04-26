#include "interfazconsultar.h"
#include "ui_interfazconsultar.h"

InterfazConsultar::InterfazConsultar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InterfazConsultar)
{
    ui->setupUi(this);
}

InterfazConsultar::~InterfazConsultar()
{
    delete ui;
}
