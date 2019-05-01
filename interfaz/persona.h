#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
#include <vector>

using namespace std;

// Superclase Persona
class Persona{
private:
    string nombre;
    int edad;
    string DNI;
public:
    Persona(string, int, string);
    vector<string> mostrarPersona();
    virtual string trabajar();
};

#endif // PERSONA_H
