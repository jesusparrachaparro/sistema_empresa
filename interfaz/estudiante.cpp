#include "estudiante.h"

// Constructor de la clase Estudiante
Estudiante::Estudiante(string nombre, int edad, string DNI, string universidad, int curso, string carrera):Persona(nombre, edad, DNI){
    this->universidad = universidad;
    this->curso= curso;
    this->carrera = carrera;
}

// Métodos de Estudiante
vector<string> Estudiante::mostrarEstudiante(){
    string cursox = to_string(curso);
    vector<string> vaux = mostrarPersona();
    vaux.push_back("Universidad: " + universidad);
    vaux.push_back("Carrera: " + carrera);
    vaux.push_back("Curso: " + cursox);
    return vaux;
}
