#ifndef CARCASA_H
#define CARCASA_H

#include <iostream>
using namespace std;


class Carcasa{
private:
    string material;
    float largo;
    float ancho;
    float grosor;
public:
    Carcasa();
    Carcasa(string, float, float, float);
    void mostrarCarcasa();
};

#endif // CARCASA_H
