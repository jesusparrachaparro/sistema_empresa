#include "estudiante.h"

// Constructor de la clase Estudiante
Estudiante::Estudiante(string nombre, int edad, string DNI, string universidad, int curso, string carrera):Persona(nombre, edad, DNI){
    this->universidad = universidad;
    this->curso= curso;
    this->carrera = carrera;
}

// Métodos de Estudiante
void Estudiante::mostrarEstudiante(){
    mostrarPersona();
    cout<<"Universidad: "<<universidad<<"\nCarrera: "<<carrera<<"\nCurso: "<<curso<<endl;
}
