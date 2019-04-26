#ifndef DIRECTIVO_H
#define DIRECTIVO_H

#include <iostream>
#include "persona.h"
using namespace std;

// Clase hija Directivo
class Directivo : public Persona{
private:
    string sede; // ciudad de la empresa del directivo
public:
    Directivo(string, int, string, string);
    void mostrarDirectivo();
    void trabajar();

};

#endif // DIRECTIVO_H
