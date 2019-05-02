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
    fichero.open("C:\\Users\\USUARIO\\Desktop\\orden.txt",ios::out | ios::app);
    fichero<<"-Datos de la Carcasa: \n\tMaterial: "<<material<<"\n\tLargo: "<<largo<<"\n\tAncho: "<<ancho<<"\n\tGrosor: "<<grosor<<endl<<endl;
    fichero.close();
}
