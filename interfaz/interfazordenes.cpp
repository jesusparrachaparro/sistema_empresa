#include "interfazordenes.h"
#include "ui_interfazordenes.h"

InterfazOrdenes::InterfazOrdenes(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InterfazOrdenes)
{
    ui->setupUi(this);
    // Se inicializan elementos de la interfaz como no visibles
    ui->creada->setVisible(false);
    ui->noencontrado->setVisible(false);
}

InterfazOrdenes::~InterfazOrdenes()
{
    delete ui;
}

// En esta opción el usuario debe introducir los datos correspondientes a la ECU, la PCB y la carcasa, así como el
// DNI del operario que se va a encargar de su fabricación. Cuando se pulse el botón de crear se guardan los datos en un
// fichero .txt

void InterfazOrdenes::on_crear_clicked()
{
    // Se inicializan elementos de la interfaz como no visibles
    ui->creada->setVisible(false);
    ui->noencontrado->setVisible(false);

    // Se guardan los datos añadidos en variables
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

    // Se limpian las casillas donde se introducen los datos
    ui->marca->clear(); ui->modelo->clear(); ui->memoria->clear(); ui->procesador->clear();
    ui->potencia->clear(); ui->pines->clear(); ui->material->clear(); ui->largo->clear();
    ui->ancho->clear(); ui->grosor->clear(); ui->operario->clear();

    // Se crea la órden
    ordenes orden = ordenes();
    int cont = orden.nueva_orden(marcax, modelox, memoriax, procesadorx, potenciax, pinesx, materialx, largox, anchox, grosorx, operariox);

    // Si se encuentra el operario se crea la ECU, mostrando un mensaje por pantalla. Si no se muestra como no encontrado.
    if (cont==1){
        ui->creada->setVisible(true);
    }else ui->noencontrado->setVisible(true);
}
