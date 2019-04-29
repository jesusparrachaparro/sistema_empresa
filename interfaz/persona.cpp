#include "persona.h"

// Constructor de la superclase Persona
Persona::Persona(string nombre, int edad, string DNI){
    this->nombre = nombre;
    this->edad = edad;
    this->DNI = DNI;
}

// Métodos de Persona
void Persona::mostrarPersona(){
    cout<<"Nombre: "<<nombre<<"\nDNI: "<<DNI<<"\nEdad: "<<edad<<endl;
}

void Persona::trabajar(){
    cout<<"Función: ";
}
