#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
using namespace std;

// Superclase Persona
class Persona{
private:
    string nombre;
    int edad;
    string DNI;
public:
    Persona(string, int, string);
    void mostrarPersona();
    virtual void trabajar();
};

#endif // PERSONA_H
