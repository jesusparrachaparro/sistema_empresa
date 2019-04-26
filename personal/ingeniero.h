#ifndef INGENIERO_H
#define INGENIERO_H

#include <iostream>
#include "empleado.h"
using namespace std;

// Clase hija Ingeniero
class Ingeniero : public Empleado{
private:
    string laboratorio; // laboratorio en el que trabaja: electrónica, mecánica, informática, eléctrica, etc.
public:
    Ingeniero(string, int, string, float, string);
    void mostrarIngeniero();
    void trabajar();
};

#endif // INGENIERO_H
