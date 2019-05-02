#include "ecu.h"
#include <QDebug>

// Constructor de ECU
Ecu::Ecu(string marca, string modelo, Pcb pcb, Carcasa carcasa){
    this->marca = marca;
    this->modelo = modelo;
    this->pcb = pcb;
    this->carcasa = carcasa;
}

// Métodos de ECU
void Ecu::mostrarMateriales(string filtro){
    fstream fichero;
    fichero.open("C:\\Users\\USUARIO\\Desktop\\orden.txt",ios::out | ios::app);

    vector<string> profesion; vector <string> nombre; vector <int> edad; vector <string> dni; vector <string> sede; vector <float> salario; vector <string> laboratorio; vector <string> zona; vector <string> universidad; vector <int> curso; vector <string> carrera; vector <int> meses;

    leer leo_fichero=leer();
    leo_fichero.leer_ficheros(&profesion, &nombre, &edad, &dni, &sede, &salario, &laboratorio, &zona, &universidad, &curso, &carrera, &meses);

    int cont = 0;
    unsigned posicion;
    for(unsigned i=0;i<dni.size();i++){
        if(filtro==dni[i]){
            posicion=i;
            cont++;
        }
    }

    Operario o(nombre[posicion], edad[posicion], dni[posicion], salario[posicion], zona[posicion]);

    if(cont==1){
        fichero<<"Nueva orden:\t\t<<Fecha y hora: ";

        auto t = time(nullptr);
        auto tm = localtime(&t);
        fichero << put_time(tm, "%d-%m-%Y %H-%M-%S") << endl;
        fichero.close();

        o.mostrarNombre();

        fstream fichero;
        fichero.open("C:\\Users\\USUARIO\\Desktop\\orden.txt",ios::out | ios::app);
        fichero<<"-Datos de la ECU: \n\tMarca: "<<marca<<"\n\tModelo: "<<modelo<<endl;
        fichero.close();

        pcb.mostrarPCB();
        carcasa.mostrarCarcasa();
    }
}
