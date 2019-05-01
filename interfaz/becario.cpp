#include "becario.h"

// Constructor de la clase Becario en prácticas
Becario::Becario(string nombre, int edad, string DNI, float salario, string universidad, int curso, string carrera, int meses):Empleado(nombre, edad, DNI, salario), Estudiante(nombre, edad, DNI, universidad, curso, carrera ){
    this->meses = meses;
}

// Métodos Becario
vector<string> Becario::mostrarBecario(){
    string mesesx = to_string(meses);
    vector<string> vaux = mostrarEmpleado();
    vaux = mostrarEstudiante();
    vaux.push_back("Meses: " + mesesx);
    return vaux;
}

string Becario::trabajar(){
    string trab = "abc";//Persona::trabajar();
    trab="Funcion: Aprendizaje y práctica.";
    return trab;
}
