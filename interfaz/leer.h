#ifndef LEER_H
#define LEER_H

#include <iostream>
#include <fstream>
#include <vector>
#include <cstring>
#include <string>
#include <cstdlib>

using namespace std;

class leer
{
public:
    leer();
    int leer_ficheros(vector <string> *profesion, vector <string> *nombre, vector <int> *edad, vector <string> *dni, vector <string> *sede, vector <float> *salario, vector <string> *laboratorio, vector <string> *zona, vector <string> *universidad, vector <int> *curso, vector <string> *carrera, vector <int> *meses);

};

#endif // LEER_H
