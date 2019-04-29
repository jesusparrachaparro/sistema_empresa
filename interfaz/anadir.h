#ifndef ANADIR_H
#define ANADIR_H

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int anadirDirectivo(string tipox, string nombrex, int edadx, string dnix, string sedex){
    // se crean los vectores contenedores
    vector <string> profesion;
    vector <string> nombre;
    vector <int> edad;
    vector <string> dni;
    vector <string> sede;
    vector <float> salario;
    vector <string> laboratorio;
    vector <string> zona;
    vector <string> universidad;
    vector <int> curso;
    vector <string> carrera;
    vector <int> meses;

    profesion.push_back(tipox);
    nombre.push_back(nombrex);
    edad.push_back(edadx);
    dni.push_back(dnix);
    sede.push_back(sedex);
    zona.push_back("-1");
    salario.push_back(-1);
    laboratorio.push_back("-1");
    universidad.push_back("-1");
    curso.push_back(-1);
    carrera.push_back("-1");
    meses.push_back(-1);

    return 0;
}

int anadirIngeniero(string tipox, string nombrex, int edadx, string dnix, float salariox, string laboratoriox){
    // se crean los vectores contenedores
    vector <string> profesion;
    vector <string> nombre;
    vector <int> edad;
    vector <string> dni;
    vector <string> sede;
    vector <float> salario;
    vector <string> laboratorio;
    vector <string> zona;
    vector <string> universidad;
    vector <int> curso;
    vector <string> carrera;
    vector <int> meses;

    profesion.push_back(tipox);
    nombre.push_back(nombrex);
    edad.push_back(edadx);
    dni.push_back(dnix);
    sede.push_back("-1");
    zona.push_back("-1");
    salario.push_back(salariox);
    laboratorio.push_back(laboratoriox);
    universidad.push_back("-1");
    curso.push_back(-1);
    carrera.push_back("-1");
    meses.push_back(-1);

    return 0;
}

int anadirOperario(string tipox, string nombrex, int edadx, string dnix, float salariox, string zonax){
    // se crean los vectores contenedores
    vector <string> profesion;
    vector <string> nombre;
    vector <int> edad;
    vector <string> dni;
    vector <string> sede;
    vector <float> salario;
    vector <string> laboratorio;
    vector <string> zona;
    vector <string> universidad;
    vector <int> curso;
    vector <string> carrera;
    vector <int> meses;

    profesion.push_back(tipox);
    nombre.push_back(nombrex);
    edad.push_back(edadx);
    dni.push_back(dnix);
    sede.push_back("-1");
    zona.push_back(zonax);
    salario.push_back(salariox);
    laboratorio.push_back("-1");
    universidad.push_back("-1");
    curso.push_back(-1);
    carrera.push_back("-1");
    meses.push_back(-1);

    return 0;
}

int anadirBecario(string tipox, string nombrex, int edadx, string dnix, float salariox, string universidadx, int cursox, string carrerax, int mesesx){
    // se crean los vectores contenedores
    vector <string> profesion;
    vector <string> nombre;
    vector <int> edad;
    vector <string> dni;
    vector <string> sede;
    vector <float> salario;
    vector <string> laboratorio;
    vector <string> zona;
    vector <string> universidad;
    vector <int> curso;
    vector <string> carrera;
    vector <int> meses;

    profesion.push_back(tipox);
    nombre.push_back(nombrex);
    edad.push_back(edadx);
    dni.push_back(dnix);
    sede.push_back("-1");
    zona.push_back("-1");
    salario.push_back(salariox);
    laboratorio.push_back("-1");
    universidad.push_back(universidadx);
    curso.push_back(cursox);
    carrera.push_back(carrerax);
    meses.push_back(mesesx);

    return 0;
}

#endif // ANADIR_H
