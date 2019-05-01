#include "directivo.h"

// Constructor de la clase Directivo
Directivo::Directivo(string nombre, int edad, string DNI, string sede):Persona(nombre, edad, DNI){
    this->sede = sede;
}

// Métodos clase Directivo
vector<string> Directivo::mostrarDirectivo(){
    vector<string> vaux = mostrarPersona();
    vaux.push_back("Sede: " + sede);
    return vaux;
}

string Directivo::trabajar(){
    string trab = Persona::trabajar();
    trab="Funcion: Organizacion y relaciones internacionales.";
    return trab;
}
