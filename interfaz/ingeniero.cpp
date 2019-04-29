#include "ingeniero.h"

// Constructor de la clase Ingeniero
Ingeniero::Ingeniero(string nombre, int edad, string DNI, float salario, string laboratorio):Empleado(nombre, edad, DNI, salario){
    this->laboratorio = laboratorio;
}

// Métodos de Ingeniero
void Ingeniero::mostrarIngeniero(){
    mostrarPersona();
    mostrarEmpleado();
    cout<<"Laboratorio: "<<laboratorio<<endl;
}

void Ingeniero::trabajar(){
    Persona::trabajar();
    cout<<"Desarrollo e investigación."<<endl;
}
