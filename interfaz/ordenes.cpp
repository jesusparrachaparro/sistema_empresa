#include "ordenes.h"

ordenes::ordenes()
{

}

int ordenes::nueva_orden(string marca, string modelo, string memoria, string procesador, string potencia, string pines, string material, string largo, string ancho, string grosor, string operario)
{
//    fstream fichero;
//    fichero.open("C:\\Users\\USUARIO\\Desktop\\orden.txt",ios::out | ios::app);

    int potenciax=stoi(potencia);
    int pinesx = stoi(pines);
    int largox = stoi(largo);
    int anchox = stoi(ancho);
    int grosorx = stoi(grosor);

    Pcb p(memoria,procesador,potenciax,pinesx);
    Carcasa c(material,largox,anchox,grosorx);
    Ecu ecu(marca, modelo, p, c);

    ecu.mostrarMateriales(operario);

    return 0;

}
