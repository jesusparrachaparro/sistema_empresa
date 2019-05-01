#include "anadirbecario.h"

anadirBecario::anadirBecario()
{

}

void anadirBecario::nuevoBecario(string tipox, string nombrex, int edadx, string dnix, float salariox, string universidadx, int cursox, string carrerax, int mesesx){

    vector<string> profesion; vector <string> nombre; vector <int> edad; vector <string> dni; vector <string> sede; vector <float> salario; vector <string> laboratorio; vector <string> zona; vector <string> universidad; vector <int> curso; vector <string> carrera; vector <int> meses;

    leer leo_fichero=leer();
    leo_fichero.leer_ficheros(&profesion, &nombre, &edad, &dni, &sede, &salario, &laboratorio, &zona, &universidad, &curso, &carrera, &meses);

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

    escribir escribo_fichero = escribir();
    escribo_fichero.escribir_ficheros(profesion, nombre, edad, dni, sede, salario, laboratorio, zona, universidad, curso, carrera, meses);
}
