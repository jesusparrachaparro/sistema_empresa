#include "ordenes.h"

ordenes::ordenes()
{

}

// Se reciben los datos introducidos en la interfazordenes.cpp como argumentos de entrada
int ordenes::nueva_orden(string marca, string modelo, string memoria, string procesador, string potencia, string pines, string material, string largo, string ancho, string grosor, string operario)
{
    int potenciax=stoi(potencia);
    int pinesx = stoi(pines);
    float largox = stof(largo);
    float anchox = stof(ancho);
    float grosorx = stof(grosor);

    // Se crean los objetos de Pcb, Carcasa y ECU
    Pcb p(memoria,procesador,potenciax,pinesx);
    Carcasa c(material,largox,anchox,grosorx);
    Ecu ecu(marca, modelo, p, c);

    // Se llama a la función mostrar materiales
    int cont = ecu.mostrarMateriales(operario);

    return cont;
}
