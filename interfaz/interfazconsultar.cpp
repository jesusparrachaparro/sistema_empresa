#include "interfazconsultar.h"
#include "ui_interfazconsultar.h"
#include "consultar.h"
#include "directivo.h"


InterfazConsultar::InterfazConsultar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InterfazConsultar)
{
    ui->setupUi(this);
    // Se inicializan elementos de la interfaz como no visibles
    ui->datos->setVisible(false);
}

InterfazConsultar::~InterfazConsultar()
{
    delete ui;
}

// En esta opción el usuario debe introducir el DNI como filtro para encontrar el trabajador del cual se quieren consultar
// sus datos. Estos datos se leerán del fichero principal y se mostrarán por pantalla al pulsar el botón de búsqueda.

void InterfazConsultar::on_buscar_clicked()
{
    ui->datos->clear(); // Se limpia la lista en la que se mostrarán los datos por si hay algo escrito en ella
    QString dni = ui->ndni->text(); // Se guarda el valor del DNI del trabajador a buscar
    string dnix = dni.toStdString();
    consultar consultarDatos = consultar(); // Se ejecuta la función que permite realizar la consulta
    vector<string> vaux;
    vaux = consultarDatos.consultarDatos(dnix); // Se guardan los datos en un contenedor de tipo vector
    if (vaux.size()==0){
        vaux.push_back("No existen los datos"); // Si el vector está vacío se guarda un mensaje de error
    }
    ui->datos->setVisible(true); // Se hace visible la lista en la que aparecerán los datos
    for (int i=0; i<vaux.size(); i++){
        QString elemento = QString::fromStdString(vaux[i]);
        ui->datos->addItem(elemento.toLatin1()); // Se van añadiendo uno por uno cada uno de los datos en la lista
    }
}
