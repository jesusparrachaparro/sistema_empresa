#include "empleado.h"

// Constructor de la clase Empleado
Empleado::Empleado(string nombre, int edad, string DNI, float salario):Persona(nombre, edad, DNI){
    this->salario = salario;
}

// Métodos de Empleado
vector<string> Empleado::mostrarEmpleado(){
    string salariox = to_string(salario);
    vector<string> vaux = mostrarPersona();
    vaux.push_back("Salario: " + salariox);
    return vaux;
}
