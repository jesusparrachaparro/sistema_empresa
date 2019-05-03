#include "interfazordenes.h"
#include "ui_interfazordenes.h"

InterfazOrdenes::InterfazOrdenes(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InterfazOrdenes)
{
    ui->setupUi(this);
    ui->creada->setVisible(false);
    ui->noencontrado->setVisible(false);
}

InterfazOrdenes::~InterfazOrdenes()
{
    delete ui;
}

void InterfazOrdenes::on_crear_clicked()
{
    ui->creada->setVisible(false);
    ui->noencontrado->setVisible(false);

    QString marca = ui->marca->text(); string marcax = marca.toStdString();
    QString modelo = ui->modelo->text(); string modelox = modelo.toStdString();
    QString memoria = ui->memoria->text(); string memoriax = memoria.toStdString();
    QString procesador = ui->procesador->text(); string procesadorx = procesador.toStdString();
    QString potencia = ui->potencia->text(); string potenciax = potencia.toStdString();
    QString pines = ui->pines->text(); string pinesx = pines.toStdString();
    QString material = ui->material->text(); string materialx = material.toStdString();
    QString largo = ui->largo->text(); string largox = largo.toStdString();
    QString ancho = ui->ancho->text(); string anchox = ancho.toStdString();
    QString grosor = ui->grosor->text(); string grosorx = grosor.toStdString();
    QString operario = ui->operario->text(); string operariox = operario.toStdString();

    ui->marca->clear(); ui->modelo->clear(); ui->memoria->clear(); ui->procesador->clear();
    ui->potencia->clear(); ui->pines->clear(); ui->material->clear(); ui->largo->clear();
    ui->ancho->clear(); ui->grosor->clear(); ui->operario->clear();

    ordenes orden = ordenes();
    int cont = orden.nueva_orden(marcax, modelox, memoriax, procesadorx, potenciax, pinesx, materialx, largox, anchox, grosorx, operariox);

    if (cont==1){
        ui->creada->setVisible(true);
    }else ui->noencontrado->setVisible(true);
}
