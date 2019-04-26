#include "becario.h"

// Constructor de la clase Becario en prácticas
Becario::Becario(string nombre, int edad, string DNI, float salario, string universidad, int curso, string carrera, int meses):Empleado(nombre, edad, DNI, salario), Estudiante(nombre, edad, DNI, universidad, curso, carrera ){
    this->meses = meses;
}

// Métodos Becario
void Becario::mostrarBecario(){
    mostrarEmpleado();
    mostrarEstudiante();
    cout<<"Meses: "<<meses<<endl;
}

void Becario::trabajar(){
    //Persona::trabajar();
    cout<<"Aprendizaje y práctica."<<endl;
}
