#include <iostream>
#include <vector>
#include "personal.h"

using namespace std;

int main()
{
    vector <string> profesion; vector <string> nombre; vector <int> edad; vector <string> dni; vector <string> sede;
    profesion.push_back("Directivo"); nombre.push_back("Jesús"); edad.push_back(21); dni.push_back("1111A"); sede.push_back("Madrid");
    profesion.push_back("Operario"); nombre.push_back("Juan"); edad.push_back(21); dni.push_back("2222B");
    profesion.push_back("Ingeniero"); nombre.push_back("María"); edad.push_back(22); dni.push_back("3333C");
    profesion.push_back("Operario"); nombre.push_back("Francisco"); edad.push_back(41); dni.push_back("4444D");
    profesion.push_back("Becario"); nombre.push_back("Rafael"); edad.push_back(41); dni.push_back("5555E");

    string filtro;
    cout<<"Introduce el DNI que desea buscar: ";
    cin>>filtro;

    int posicion;
    for(int i=0;i<dni.size();i++){
        if(filtro==dni[i]){
            posicion=i;
        }
    }
    string puesto=profesion[posicion];
    if(puesto=="Directivo"){
        Directivo a(nombre[posicion],edad[posicion],dni[posicion],sede[posicion]);
        a.mostrarDirectivo();
    }/*else if(puesto=="Operario"){
        Operario a(nombre[posicion],edad[posicion],dni[posicion],salario[posicion],zona[posicion]);
        a.mostrarOperario();
    }else if(puesto=="Ingeriero"){
        Ingeniero a(nombre[posicion],edad[posicion],dni[posicion],salario[posicion],laboratorio[posicion]);
        a.mostrarIngeniero();
    }else if(puesto=="Becario"){
        Becario a(nombre[posicion],edad[posicion],dni[posicion],salario[posicion],universidad[posicion],curso[posicion],carrera[posicion],meses[posicion]);
        a.mostrarBecario();
    }*/

    return 0;
}
