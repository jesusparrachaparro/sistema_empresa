#ifndef ECU_H
#define ECU_H

#include <iostream>
#include <fstream>
#include <ctime>
#include <iomanip>
#include "carcasa.h"
#include "pcb.h"
#include "leer.h"
#include "operario.h"

using namespace std;

class Ecu{
private:
    string marca;
    string modelo;
    Pcb pcb; // --> AGREGACIÓN
    Carcasa carcasa; // --> AGREGACIÓN
public:
    Ecu(string, string, Pcb, Carcasa);
    int mostrarMateriales(string);
};

#endif // ECU_H
