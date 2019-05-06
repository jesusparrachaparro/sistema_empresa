#include "anadiroperario.h"

anadirOperario::anadirOperario()
{

}

// Se reciben los datos de la interfazconsultar.cpp como argumentos de entrada
int anadirOperario::nuevoOperario(string tipox, string nombrex, int edadx, string dnix, float salariox, string zonax){

    vector<string> profesion; vector <string> nombre; vector <int> edad; vector <string> dni; vector <string> sede; vector <float> salario; vector <string> laboratorio; vector <string> zona; vector <string> universidad; vector <int> curso; vector <string> carrera; vector <int> meses;

    leer leo_fichero=leer();
    leo_fichero.leer_ficheros(&profesion, &nombre, &edad, &dni, &sede, &salario, &laboratorio, &zona, &universidad, &curso, &carrera, &meses);

    // Se inicializa un contador para comprobar si se ha encontrado el trabajador a consultar. Si el contador permanece en
    // cero, el usuario no ha sido encontrado.
    int cont = 0;
    for(unsigned i=0;i<dni.size();i++){
        if(dnix==dni[i]){
            cont++;
        }
    }

    // Se añaden los datos al final de los vectores
    if (cont==0){
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

    escribir escribo_fichero = escribir(); // Se escriben los datos en el fichero
    escribo_fichero.escribir_ficheros(profesion, nombre, edad, dni, sede, salario, laboratorio, zona, universidad, curso, carrera, meses);
    }else cont==1;
    return cont;
}
