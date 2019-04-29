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
    cout<<"Memoria: "<<memoria<<"\nProcesador: "<<procesador<<"\nPotencia: "<<potencia<<"\nNúmero de pines: "<<pines<<endl;
}
