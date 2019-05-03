#ifndef OPERARIO_H
#define OPERARIO_H

#include <iostream>
#include <fstream>
#include "empleado.h"
#include "ecu.h"
//#include "mainwindow.h"

using namespace std;

// Clase hija Operario
class Operario : public Empleado{
private:
    string zona; // zona de la empresa en la que trabaja: almacén, mantenimiento, montaje, etc.
public:
    Operario(string, int, string, float, string);
    vector<string> mostrarOperario();
    string trabajar();
    int mostrarNombre();
};

#endif // OPERARIO_H
