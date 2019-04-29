#include "carcasa.h"

// Constructor de Carcasa
Carcasa::Carcasa(){}

Carcasa::Carcasa(string material, float largo, float ancho, float grosor){
    this->material = material;
    this->largo = largo;
    this->ancho = ancho;
    this->grosor = grosor;
}

// Métodos de Carcasa
void Carcasa::mostrarCarcasa(){
    cout<<"Material: "<<material<<"\nLargo: "<<largo<<"\nAncho: "<<ancho<<"\nGrosor: "<<grosor<<endl;
}
