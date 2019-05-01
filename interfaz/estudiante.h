#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include <iostream>
#include "persona.h"

using namespace std;

// Clase hija Estudiante
class Estudiante : public Persona{
private:
    string universidad;
    int curso;
    string carrera;
public:
    Estudiante(string, int, string, string, int, string);
    vector<string> mostrarEstudiante();
};


#endif // ESTUDIANTE_H
