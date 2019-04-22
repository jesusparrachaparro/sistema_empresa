#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector <string> profesion={"Directivo","Operario","Ingeniero","Operario"};
    vector <string> nombre={"Juan Francisco","María","Jesús","Rafael"};
    vector <int> edad={42,21,23,35};
    vector <string> dni={"1111A","2222B","3333C","4444D"};

    string filtro;
    cout<<"Introduce un DNI para encontrar el usuario: ";
    cin>>filtro;

    int posicion;
    for(int i=0;i<dni.size();i++){
        if(filtro==dni[i]){
            posicion=i;
        }
    }

    profesion.erase(profesion.begin()+posicion);
    nombre.erase(nombre.begin()+posicion);
    edad.erase(edad.begin()+posicion);
    dni.erase(dni.begin()+posicion);

    cout<<profesion.size()<<endl;
    cout<<nombre.size()<<endl;
    cout<<edad.size()<<endl;
    cout<<dni.size()<<endl;

    return 0;
}
