#ifndef BECARIO_H
#define BECARIO_H


#include <iostream>
#include "empleado.h"
#include "estudiante.h"

using namespace std;

// Clase hija Becario en prácticas (herencia múltiple)
class Becario : public Empleado, public Estudiante{
private:
    int meses; // meses de prácticas
public:
    Becario(string, int, string, float, string, int, string, int);
    vector<string> mostrarBecario();
    string trabajar();
};

#endif // BECARIO_H
