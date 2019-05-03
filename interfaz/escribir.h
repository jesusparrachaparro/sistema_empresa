#ifndef ESCRIBIR_H
#define ESCRIBIR_H

#include <iostream>
#include <fstream>
#include <vector>
//#include "mainwindow.h"

using namespace std;

class escribir
{
public:
    escribir();
    int escribir_ficheros(vector <string> profesion, vector <string> nombre, vector <int> edad, vector <string> dni, vector <string> sede, vector <float> salario, vector <string> laboratorio, vector <string> zona, vector <string> universidad, vector <int> curso, vector <string> carrera, vector <int> meses);

};

#endif // ESCRIBIR_H
