#include "eliminar.h"

eliminar::eliminar()
{

}

// Se recibe como argumento de entrada el DNI del trabajador a eliminar
int eliminar::eliminar_datos(string filtro)
{
    // Se crean los contenedores de tipo contenedor para guardar los datos del fichero
    vector<string> profesion; vector <string> nombre; vector <int> edad; vector <string> dni; vector <string> sede; vector <float> salario; vector <string> laboratorio; vector <string> zona; vector <string> universidad; vector <int> curso; vector <string> carrera; vector <int> meses;

    // Se leen los datos del fichero
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

    // Se eliminan los datos correspondientes a ese trabajador
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

        escribir escribo_fichero = escribir(); // Se escriben de nuevo los datos en el fichero
        escribo_fichero.escribir_ficheros(profesion, nombre, edad, dni, sede, salario, laboratorio, zona, universidad, curso, carrera, meses);
    }

    return cont;
}
