#include "anadirdirectivo.h"

anadirDirectivo::anadirDirectivo()
{

}

int anadirDirectivo::nuevoDirectivo(string tipox, string nombrex, int edadx, string dnix, string sedex){

    vector<string> profesion; vector <string> nombre; vector <int> edad; vector <string> dni; vector <string> sede; vector <float> salario; vector <string> laboratorio; vector <string> zona; vector <string> universidad; vector <int> curso; vector <string> carrera; vector <int> meses;

    leer leo_fichero=leer();
    leo_fichero.leer_ficheros(&profesion, &nombre, &edad, &dni, &sede, &salario, &laboratorio, &zona, &universidad, &curso, &carrera, &meses);

    int cont = 0;
    unsigned posicion;
    for(unsigned i=0;i<dni.size();i++){
        if(dnix==dni[i]){
            posicion=i;
            cont++;
        }
    }

    if (cont==0){
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
        escribir escribo_fichero = escribir();
        escribo_fichero.escribir_ficheros(profesion, nombre, edad, dni, sede, salario, laboratorio, zona, universidad, curso, carrera, meses);
    }else cont==1;
    return cont;
}
