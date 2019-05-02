#ifndef ORDENES_H
#define ORDENES_H

#include <iostream>
#include <fstream>
#include "ecu.h"

using namespace std;

class ordenes
{
public:
    ordenes();
    int nueva_orden(string, string, string, string, string, string, string, string, string, string, string);
};

#endif // ORDENES_H
