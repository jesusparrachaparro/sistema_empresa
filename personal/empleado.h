#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <iostream>
#include "persona.h"
using namespace std;


// Clase hija Empleado
class Empleado : public Persona{
private:
    float salario;
public:
    Empleado(string, int, string, float);
    void mostrarEmpleado();
};
#endif // EMPLEADO_H
