#include "pcb.h"

// Constructor de PCB
Pcb::Pcb(){
}

Pcb::Pcb(string memoria, string procesador, int potencia, int pines){
    this->memoria =memoria;
    this->procesador = procesador;
    this->potencia = potencia;
    this->pines = pines;

}

// Métodos PCB
void Pcb::mostrarPCB(){
    fstream fichero;
    fichero.open("C:\\Users\\USUARIO\\Desktop\\orden.txt",ios::out | ios::app);
    fichero<<"-Datos de la PCB: \n\tMemoria: "<<memoria<<"\n\tProcesador: "<<procesador<<"\n\tPotencia: "<<potencia<<"\n\tNúmero de pines: "<<pines<<endl;
    fichero.close();
}

