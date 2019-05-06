#include "anadirbecario.h"

anadirBecario::anadirBecario()
{

}

// Se reciben los datos de la interfazconsultar.cpp como argumentos de entrada
int anadirBecario::nuevoBecario(string tipox, string nombrex, int edadx, string dnix, float salariox, string universidadx, int cursox, string carrerax, int mesesx){

    // Se crean los contenedores de tipo contenedor para guardar los datos del fichero
    vector<string> profesion; vector <string> nombre; vector <int> edad; vector <string> dni; vector <string> sede; vector <float> salario; vector <string> laboratorio; vector <string> zona; vector <string> universidad; vector <int> curso; vector <string> carrera; vector <int> meses;

    // Se leen los datos del fichero
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
        zona.push_back("-1");
        salario.push_back(salariox);
        laboratorio.push_back("-1");
        universidad.push_back(universidadx);
        curso.push_back(cursox);
        carrera.push_back(carrerax);
        meses.push_back(mesesx);
        escribir escribo_fichero = escribir(); // Se escriben los datos en el fichero
        escribo_fichero.escribir_ficheros(profesion, nombre, edad, dni, sede, salario, laboratorio, zona, universidad, curso, carrera, meses);
    }else cont==1;
    return cont;
}
