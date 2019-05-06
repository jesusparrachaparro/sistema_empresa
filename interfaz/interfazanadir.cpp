#include "interfazanadir.h"
#include "ui_interfazanadir.h"

InterfazAnadir::InterfazAnadir(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InterfazAnadir)
{
    ui->setupUi(this);
    // Se inicializan elementos de la interfaz como no visibles
    ui->nombrelabel->setVisible(false); ui->line1->setVisible(false);
    ui->edadlabel->setVisible(false); ui->line2->setVisible(false);
    ui->dnilabel->setVisible(false); ui->line3->setVisible(false);
    ui->sedelabel->setVisible(false);  ui->line4->setVisible(false);
    ui->salariolabel->setVisible(false);
    ui->laboratoriolabel->setVisible(false); ui->line5->setVisible(false);
    ui->zonalabel->setVisible(false);
    ui->universidadlabel->setVisible(false);
    ui->carreralabel->setVisible(false); ui->line6->setVisible(false);
    ui->cursolabel->setVisible(false); ui->line7->setVisible(false);
    ui->meseslabel->setVisible(false); ui->line8->setVisible(false);
    ui->anadido->setVisible(false); ui->yaexiste->setVisible(false);
}

InterfazAnadir::~InterfazAnadir()
{
    delete ui;
}

// En esta opción el usuario debe introducir el tipo de trabajador a añadir en la base de datos y pulsar el botón de OK.
// Según el tipo elegido se mostrarán diferentes casillas y etiquetas de los datos a añadir.

void InterfazAnadir::on_ok_clicked()
{
    // Se inicializan los datos a mostrar y se limpian las casillas
    ui->nombrelabel->setVisible(true); ui->line1->setVisible(true); ui->line1->clear();
    ui->edadlabel->setVisible(true); ui->line2->setVisible(true); ui->line2->clear();
    ui->dnilabel->setVisible(true); ui->line3->setVisible(true); ui->line3->clear();
    ui->sedelabel->setVisible(false); ui->line4->setVisible(false); ui->line4->clear();
    ui->salariolabel->setVisible(false);
    ui->laboratoriolabel->setVisible(false); ui->line5->setVisible(false); ui->line5->clear();
    ui->zonalabel->setVisible(false);
    ui->universidadlabel->setVisible(false);
    ui->carreralabel->setVisible(false); ui->line6->setVisible(false); ui->line6->clear();
    ui->cursolabel->setVisible(false); ui->line7->setVisible(false); ui->line7->clear();
    ui->meseslabel->setVisible(false); ui->line8->setVisible(false); ui->line8->clear();
    ui->anadido->setVisible(false); ui->yaexiste->setVisible(false);
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
        ui->carreralabel->setVisible(true); ui->line6->setVisible(true);
        ui->cursolabel->setVisible(true); ui->line7->setVisible(true);
        ui->meseslabel->setVisible(true); ui->line8->setVisible(true);
    }
}

// Una vez añadidos los datos correspondientes al tipo de trabajador, se pulsa el botón guardar para añadir los datos al
// fichero principal.

void InterfazAnadir::on_guardar_clicked()
{
    ui->anadido->setVisible(false);
    ui->yaexiste->setVisible(false);
    // Se guarda cada uno de los datos en variables
    QString tipo = ui->tipo->text(); string tipox = tipo.toStdString();
    QString nombre = ui->line1->text(); string nombrex = nombre.toStdString();
    QString edad = ui->line2->text(); int edadx = edad.toInt();
    QString dni = ui->line3->text(); string dnix = dni.toStdString();
    int cont; // Se crea un contador para comprobar si ya existe el usuario que se quiere añadir
    if (tipo=="Directivo"){
        QString sede = ui->line4->text(); string sedex = sede.toStdString();
        anadirDirectivo nuevoDirectivo = anadirDirectivo();
        cont = nuevoDirectivo.nuevoDirectivo(tipox, nombrex, edadx, dnix, sedex);
    }
    else if (tipo=="Ingeniero"){
        QString salario = ui->line4->text(); float salariox = salario.toFloat();
        QString laboratorio = ui->line5->text(); string laboratoriox = laboratorio.toStdString();
        anadirIngeniero nuevoIngeniero = anadirIngeniero();
        cont = nuevoIngeniero.nuevoIngeniero(tipox, nombrex, edadx, dnix, salariox, laboratoriox);
    }
    else if (tipo=="Operario"){
        QString salario = ui->line4->text(); float salariox = salario.toFloat();
        QString zona = ui->line5->text(); string zonax = zona.toStdString();
        anadirOperario nuevoOperario = anadirOperario();
        cont = nuevoOperario.nuevoOperario(tipox, nombrex, edadx, dnix, salariox, zonax);
    }
    else if (tipo=="Becario"){
        QString salario = ui->line4->text(); float salariox = salario.toFloat();
        QString universidad = ui->line5->text(); string universidadx = universidad.toStdString();
        QString carrera = ui->line6->text(); string carrerax = carrera.toStdString();
        QString curso = ui->line7->text(); int cursox = curso.toInt();
        QString meses = ui->line8->text(); int mesesx = meses.toInt();
        anadirBecario nuevoBecario = anadirBecario();
        cont = nuevoBecario.nuevoBecario(tipox, nombrex, edadx, dnix, salariox, universidadx, cursox, carrerax, mesesx);
    }
    if (cont==0) ui->anadido->setVisible(true);
    else ui->yaexiste->setVisible(true);
}
