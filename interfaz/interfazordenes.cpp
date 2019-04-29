#include "interfazordenes.h"
#include "ui_interfazordenes.h"

InterfazOrdenes::InterfazOrdenes(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InterfazOrdenes)
{
    ui->setupUi(this);
}

InterfazOrdenes::~InterfazOrdenes()
{
    delete ui;
}

void InterfazOrdenes::on_crear_clicked()
{
    QString marca = ui->marca->text();
    QString modelo = ui->modelo->text();
    QString memoria = ui->memoria->text();
    QString procesador = ui->procesador->text();
    QString potencia = ui->potencia->text();
    QString pines = ui->pines->text();
    QString material = ui->material->text();
    QString largo = ui->largo->text();
    QString ancho = ui->ancho->text();
    QString grosor = ui->grosor->text();
    QString operario = ui->operario->text();
}
