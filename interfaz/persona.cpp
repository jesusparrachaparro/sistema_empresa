#include "persona.h"

// Constructor de la superclase Persona
Persona::Persona(string nombre, int edad, string DNI){
    this->nombre = nombre;
    this->edad = edad;
    this->DNI = DNI;
}

// Métodos de Persona
vector<string> Persona::mostrarPersona(){
    string edadx = to_string(edad);
    vector<string> vaux;
    vaux.push_back("Nombre: " + nombre);
    vaux.push_back("Edad: " + edadx);
    vaux.push_back("DNI: " + DNI);
    return vaux;
}

string Persona::trabajar(){
    string trab;
    return trab;
}
