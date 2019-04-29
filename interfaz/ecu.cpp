#include "ecu.h"

// Constructor de ECU
Ecu::Ecu(string marca, string modelo, Pcb pcb, Carcasa carcasa){
    this->marca = marca;
    this->modelo = modelo;
    this->pcb = pcb;
    this->carcasa = carcasa;
}

// Métodos de ECU
void Ecu::mostrarMateriales(){
    cout<<"Marca: "<<marca<<"\nModelo: "<<modelo<<endl;
    pcb.mostrarPCB();
    carcasa.mostrarCarcasa();
}
