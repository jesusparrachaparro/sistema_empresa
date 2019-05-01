#include "eliminar.h"

eliminar::eliminar()
{

}

int eliminar::eliminar_datos(string filtro)
{

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

    if(cont==1){
        profesion.erase(profesion.begin()+posicion);
        nombre.erase(nombre.begin()+posicion);
        edad.erase(edad.begin()+posicion);
        dni.erase(dni.begin()+posicion);
        sede.erase(sede.begin()+posicion);
        salario.erase(salario.begin()+posicion);
        laboratorio.erase(laboratorio.begin()+posicion);
        zona.erase(zona.begin()+posicion);
        universidad.erase(universidad.begin()+posicion);
        curso.erase(curso.begin()+posicion);
        carrera.erase(carrera.begin()+posicion);
        meses.erase(meses.begin()+posicion);

        escribir escribo_fichero = escribir();
        escribo_fichero.escribir_ficheros(profesion, nombre, edad, dni, sede, salario, laboratorio, zona, universidad, curso, carrera, meses);
    }

    return cont;
}
