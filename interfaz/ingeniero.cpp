#include "ingeniero.h"

// Constructor de la clase Ingeniero
Ingeniero::Ingeniero(string nombre, int edad, string DNI, float salario, string laboratorio):Empleado(nombre, edad, DNI, salario){
    this->laboratorio = laboratorio;
}

// Métodos de Ingeniero
vector<string> Ingeniero::mostrarIngeniero(){
    vector<string> vaux = mostrarEmpleado();
    vaux.push_back("Laboratorio: " + laboratorio);
    return vaux;
}

string Ingeniero::trabajar(){
    string trab = Persona::trabajar();
    trab = "Puesto: Ingeniero\nFuncion: Desarrollo e investigacion";
    return trab;
}
