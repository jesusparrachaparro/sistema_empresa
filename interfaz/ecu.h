#ifndef ECU_H
#define ECU_H

#include <iostream>
#include "carcasa.h"
#include "pcb.h"
#include "operario.h"

using namespace std;

class Ecu{
private:
    string marca;
    string modelo;
    Pcb pcb;
    Carcasa carcasa;
public:
    Ecu(string, string, Pcb, Carcasa);
    void mostrarMateriales(); //añadir un objeto que necesite la propia función: dependencia
    void montaje(Operario op);
};

#endif // ECU_H
