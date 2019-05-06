#include "consultar.h"

consultar::consultar()
{

}

vector<string> consultar::consultarDatos(string dnix){

    // Se crean los contenedores de tipo vector para almacenar los datos del trabajador
    vector<string> profesion; vector <string> nombre; vector <int> edad; vector <string> dni; vector <string> sede; vector <float> salario; vector <string> laboratorio; vector <string> zona; vector <string> universidad; vector <int> curso; vector <string> carrera; vector <int> meses;

    // Se leen los datos del fichero .txt
    leer leo_fichero=leer();
    leo_fichero.leer_ficheros(&profesion, &nombre, &edad, &dni, &sede, &salario, &laboratorio, &zona, &universidad, &curso, &carrera, &meses);

    // Se inicializa un contador para comprobar si se ha encontrado el trabajador a consultar. Si el contador permanece en
    // cero, el usuario no ha sido encontrado.

    int cont=0;
    // Se guarda la posición en la que se encuentra el DNI del trabajador para poder conocer la posición concreta de cada
    // uno de sus datos
    int posicion;
    for(int i=0;i<dni.size();i++){
        if(dnix==dni[i]){
            posicion=i;
            cont++;
        }
    }

    vector<string> vaux;
    string trab;

    if (cont==1){
        // Se guarda el dato de la profesión del trabajador a buscar. Dependiendo del tipo se creará un objeto u otro.
        string tipo = profesion[posicion];
        if(tipo=="Directivo"){
            Directivo a = Directivo(nombre[posicion],edad[posicion],dni[posicion],sede[posicion]);
            vaux = a.mostrarDirectivo();
            trab = a.trabajar();
            vaux.push_back(trab);
        }else if(tipo=="Operario"){
            Operario a = Operario(nombre[posicion],edad[posicion],dni[posicion],salario[posicion],zona[posicion]);
            vaux = a.mostrarOperario();
            trab = a.trabajar();
            vaux.push_back(trab);
        }else if(tipo=="Ingeniero"){
            Ingeniero a = Ingeniero(nombre[posicion],edad[posicion],dni[posicion],salario[posicion],laboratorio[posicion]);
            vaux = a.mostrarIngeniero();
            trab = a.trabajar();
            vaux.push_back(trab);
        }else if(tipo=="Becario"){
            Becario a = Becario(nombre[posicion],edad[posicion],dni[posicion],salario[posicion],universidad[posicion],curso[posicion],carrera[posicion],meses[posicion]);
            vaux = a.mostrarBecario();
            trab = a.trabajar();
            vaux.push_back(trab);
        }
    }
    return vaux; // Se devuelve un vector con todos los datos de la consulta
}

