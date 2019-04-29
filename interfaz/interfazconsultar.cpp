#include "interfazconsultar.h"
#include "ui_interfazconsultar.h"
#include "consultar.h"
#include "directivo.h"


InterfazConsultar::InterfazConsultar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InterfazConsultar)
{
    ui->setupUi(this);
    ui->datos->setVisible(false);
}

InterfazConsultar::~InterfazConsultar()
{
    delete ui;
}

void InterfazConsultar::on_buscar_clicked()
{
    QString dni = ui->ndni->text();
    string dnix = dni.toStdString();
    consultardatos(dnix);

}
