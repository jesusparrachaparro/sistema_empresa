#include "empleado.h"

// Constructor de la clase Empleado
Empleado::Empleado(string nombre, int edad, string DNI, float salario):Persona(nombre, edad, DNI){
    this->salario = salario;
}

// Métodos de Empleado
void Empleado::mostrarEmpleado(){
    cout<<"Salario: "<<salario<<endl;
}
