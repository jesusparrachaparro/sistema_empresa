#ifndef CONSULTAR_H
#define CONSULTAR_H

#include <iostream>
#include <vector>
#include "leer.h"
#include "directivo.h"
#include "ingeniero.h"
#include "operario.h"
#include "becario.h"

using namespace std;

class consultar
{

public:
    consultar();
    vector<string> consultarDatos(string);
};

#endif // CONSULTAR_H
