#include "operario.h"

// Constructor de la clase Operario
Operario::Operario(string nombre, int edad, string DNI, float salario, string zona):Empleado(nombre, edad, DNI, salario){
    this->zona = zona;
}

// Métodos de Operario
void Operario::mostrarOperario(){
    mostrarPersona();
    mostrarEmpleado();
    cout<<"Zona: "<<zona<<endl;
}

void Operario::trabajar(){
    Persona::trabajar();
    cout<<"Mantenimiento, montaje y alamacenaje."<<endl;
}
