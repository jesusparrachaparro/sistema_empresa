#include "ecu.h"

// Constructor de ECU
Ecu::Ecu(string marca, string modelo, Pcb pcb, Carcasa carcasa){
    this->marca = marca;
    this->modelo = modelo;
    this->pcb = pcb;
    this->carcasa = carcasa;
}

// Métodos de ECU
int Ecu::mostrarMateriales(string filtro){

    fstream fichero;
    string direccion = "C:\\Users\\WIN10PRO\\Desktop\\orden.txt";
    fichero.open(direccion,ios::out | ios::app);

    vector<string> profesion; vector <string> nombre; vector <int> edad; vector <string> dni; vector <string> sede; vector <float> salario; vector <string> laboratorio; vector <string> zona; vector <string> universidad; vector <int> curso; vector <string> carrera; vector <int> meses;

    // Se lee el fichero para obtener los datos del operario que fabricará la ECU
    leer leo_fichero=leer();
    leo_fichero.leer_ficheros(&profesion, &nombre, &edad, &dni, &sede, &salario, &laboratorio, &zona, &universidad, &curso, &carrera, &meses);

    // Se inicializa un contador para comprobar si se ha encontrado el trabajador a consultar. Si el contador permanece en
    // cero, el usuario no ha sido encontrado.
    int cont = 0;
    unsigned posicion;
    for(unsigned i=0;i<dni.size();i++){
        if(filtro==dni[i]){
            posicion=i;
            cont++;
        }
    }

    if(cont==1){
        if(profesion[posicion]=="Operario"){
            // Se crea un objeto Operario desde la clase Ecu --> DEPENDENCIA DE CLASES
            Operario o(nombre[posicion], edad[posicion], dni[posicion], salario[posicion], zona[posicion]);

            fichero<<"Nueva orden:\t\tFecha y hora: ";

            // Se añade la fecha y hora
            auto t = time(nullptr);
            auto tm = localtime(&t);
            fichero << put_time(tm, "%d-%m-%Y %H-%M-%S") << endl;
            fichero.close();

            // Se llama al método de la clase Operario
            o.mostrarNombre();

            fstream fichero;
            fichero.open(direccion,ios::out | ios::app);
            fichero<<"-Datos de la ECU: \n\tMarca: "<<marca<<"\n\tModelo: "<<modelo<<endl;
            fichero.close();

            // Se crean los objetos de Pcb y Carcasa desde la clase Ecu --> AGREGACIÓN
            pcb.mostrarPCB();
            carcasa.mostrarCarcasa();
        }else{
            cont=0;
            fichero.close();
        }
    }
    return cont;
}
