#include "directivo.h"

// Constructor de la clase Directivo
Directivo::Directivo(string nombre, int edad, string DNI, string sede):Persona(nombre, edad, DNI){
    this->sede = sede;
}

// Métodos clase Directivo
void Directivo::mostrarDirectivo(){
    mostrarPersona();
    cout<<"Sede: "<<sede<<endl;
}

void Directivo::trabajar(){
    Persona::trabajar();
    cout<<"Organización y relaciones internacionales."<<endl;
}
