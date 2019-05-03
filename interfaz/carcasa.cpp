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
    fstream fichero;
    string direccion = "C:\\Users\\WIN10PRO\\Desktop\\orden.txt";
    fichero.open(direccion,ios::out | ios::app);
    fichero<<"-Datos de la Carcasa: \n\tMaterial: "<<material<<"\n\tLargo: "<<largo<<"\n\tAncho: "<<ancho<<"\n\tGrosor: "<<grosor<<endl<<endl;
    fichero.close();
}
