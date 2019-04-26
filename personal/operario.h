#ifndef OPERARIO_H
#define OPERARIO_H

#include <iostream>
#include "empleado.h"
using namespace std;

// Clase hija Operario
class Operario : public Empleado{
private:
    string zona; // zona de la empresa en la que trabaja: almacén, mantenimiento, montaje, etc.
public:
    Operario(string, int, string, float, string);
    void mostrarOperario();
    void trabajar();
};

#endif // OPERARIO_H
