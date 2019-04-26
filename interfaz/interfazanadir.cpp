#include "interfazanadir.h"
#include "ui_interfazanadir.h"
#include "anadir.h"

InterfazAnadir::InterfazAnadir(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InterfazAnadir)
{
    ui->setupUi(this);
    ui->nombrelabel->setVisible(false); ui->line1->setVisible(false);
    ui->edadlabel->setVisible(false); ui->line2->setVisible(false);
    ui->dnilabel->setVisible(false); ui->line3->setVisible(false);
    ui->sedelabel->setVisible(false);  ui->line4->setVisible(false);
    ui->salariolabel->setVisible(false);
    ui->laboratoriolabel->setVisible(false); ui->line5->setVisible(false);
    ui->zonalabel->setVisible(false);
    ui->universidadlabel->setVisible(false);
    ui->cursolabel->setVisible(false); ui->line6->setVisible(false);
    ui->carreralabel->setVisible(false); ui->line7->setVisible(false);
    ui->meseslabel->setVisible(false); ui->line8->setVisible(false);
}

InterfazAnadir::~InterfazAnadir()
{
    delete ui;
}


void InterfazAnadir::on_ok_clicked()
{
    ui->nombrelabel->setVisible(true); ui->line1->setVisible(true);
    ui->edadlabel->setVisible(true); ui->line2->setVisible(true);
    ui->dnilabel->setVisible(true); ui->line3->setVisible(true);
    QString tipo = ui->tipo->text();
    if (tipo=="Directivo"){
        ui->sedelabel->setVisible(true); ui->line4->setVisible(true);
    }
    else if (tipo=="Ingeniero"){
        ui->salariolabel->setVisible(true); ui->line4->setVisible(true);
        ui->laboratoriolabel->setVisible(true); ui->line5->setVisible(true);
    }
    else if (tipo=="Operario"){
        ui->salariolabel->setVisible(true); ui->line4->setVisible(true);
        ui->zonalabel->setVisible(true); ui->line5->setVisible(true);
    }
    else if (tipo=="Becario"){
        ui->salariolabel->setVisible(true); ui->line4->setVisible(true);
        ui->universidadlabel->setVisible(true); ui->line5->setVisible(true);
        ui->cursolabel->setVisible(true); ui->line6->setVisible(true);
        ui->carreralabel->setVisible(true); ui->line7->setVisible(true);
        ui->meseslabel->setVisible(true); ui->line8->setVisible(true);
    }
}

void InterfazAnadir::on_guardar_clicked()
{
    anadir_datos();
}
