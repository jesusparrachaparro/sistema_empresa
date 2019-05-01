#include "consultar.h"

consultar::consultar()
{

}

vector<string> consultar::consultarDatos(string dnix){

    vector<string> profesion; vector <string> nombre; vector <int> edad; vector <string> dni; vector <string> sede; vector <float> salario; vector <string> laboratorio; vector <string> zona; vector <string> universidad; vector <int> curso; vector <string> carrera; vector <int> meses;

    leer leo_fichero=leer();
    leo_fichero.leer_ficheros(&profesion, &nombre, &edad, &dni, &sede, &salario, &laboratorio, &zona, &universidad, &curso, &carrera, &meses);

    int posicion;
    for(int i=0;i<dni.size();i++){
        if(dnix==dni[i]){
            posicion=i;
        }
    }
    vector<string> vaux;
    string trab;
    string tipo = profesion[posicion];
    if(tipo=="Directivo"){
        Directivo a = Directivo(nombre[posicion],edad[posicion],dni[posicion],sede[posicion]);
        vaux = a.mostrarDirectivo();
        trab = a.trabajar();
        vaux.push_back(trab);
    }/*else if(tipo=="Operario"){
        Operario a(nombre[posicion],edad[posicion],dni[posicion],salario[posicion],zona[posicion]);
        a.mostrarOperario();
    }else if(tipo=="Ingeriero"){
        Ingeniero a(nombre[posicion],edad[posicion],dni[posicion],salario[posicion],laboratorio[posicion]);
        a.mostrarIngeniero();
    }else if(tipo=="Becario"){
        Becario a(nombre[posicion],edad[posicion],dni[posicion],salario[posicion],universidad[posicion],curso[posicion],carrera[posicion],meses[posicion]);
        a.mostrarBecario();
    }*/
    return vaux;
}

