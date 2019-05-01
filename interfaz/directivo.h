#ifndef DIRECTIVO_H
#define DIRECTIVO_H

#include <iostream>
#include "persona.h"
#include <vector>

using namespace std;

// Clase hija Directivo
class Directivo : public Persona{
public:
    string sede; // ciudad de la empresa del directivo
public:
    Directivo(string, int, string, string);
    vector<string> mostrarDirectivo();
    string trabajar();

};

#endif // DIRECTIVO_H
