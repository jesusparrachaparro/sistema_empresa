#ifndef PCB_H
#define PCB_H

#include <iostream>
using namespace std;

class Pcb{
private:
    string memoria;
    string procesador;
    int potencia;
    int pines;
public:
    Pcb();
    Pcb(string, string, int, int);
    void mostrarPCB();
};

#endif // PCB_H
