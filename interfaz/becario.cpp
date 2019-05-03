#include "becario.h"

// Constructor de la clase Becario en prácticas
Becario::Becario(string nombre, int edad, string DNI, float salario, string universidad, int curso, string carrera, int meses):Empleado(nombre, edad, DNI, salario), Estudiante(nombre, edad, DNI, universidad, curso, carrera ){
    this->meses = meses;
}

// Métodos Becario
vector<string> Becario::mostrarBecario(){
    string mesesx = to_string(meses);
    vector<string> vaux1 = mostrarEmpleado();
    vector<string> vaux2 = mostrarEstudiante();
    vector<string> vaux(begin(vaux1),std::end(vaux1));
    vaux.insert(vaux.end(),begin(vaux2),end(vaux2));
    vaux.push_back("Meses: " + mesesx);
    return vaux;
}

string Becario::trabajar(){
    string trab;
    trab="Puesto: Becario en practicas\nFuncion: Aprendizaje y practica";
    return trab;
}
