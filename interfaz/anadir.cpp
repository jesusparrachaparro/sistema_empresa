#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // se crean los vectores contenedores
    vector <string> profesion;
    vector <string> nombre;
    vector <int> edad;
    vector <string> dni;
    vector <string> sede;
    vector <float> salario;
    vector <string> laboratorio;
    vector <string> zona;
    vector <string> universidad;
    vector <int> curso;
    vector <string> carrera;
    vector <int> meses;

    string tipo; cin>>tipo; fflush(stdin);
    int anios;
    string id;
    string name;

    // datos generales
    profesion.push_back(tipo);
    cout<<"Introduce el nombre"<<endl; cin>>name;
    nombre.push_back(name); fflush(stdin);
    cout<<"Introduce la edad"<<endl; cin>>anios;
    edad.push_back(anios); fflush(stdin);
    cout<<"Introduce el dni"<<endl; cin>>id;
    dni.push_back(id); fflush(stdin);

    // variables para probar
    float dinero;
    string lab;
    string zone;
    string uni, carr;
    int mes, cur;
    string sed;

    // inicializamos
    sede.push_back("-1");
    universidad.push_back("-1");
    curso.push_back(-1);
    carrera.push_back("-1");
    meses.push_back(-1);
    zona.push_back("-1");
    salario.push_back(-1);
    laboratorio.push_back("-1");

    // se modifican los vectores según los atributos de cada tipo de empleado
    if (tipo=="Ingeniero"){
        cout<<"Introduce el salario"<<endl; cin>>dinero;
        salario[salario.size()]=dinero; fflush(stdin);
        cout<<"Introduce el laboratorio"<<endl; cin>>lab;
        laboratorio[laboratorio.size()]=lab; fflush(stdin);
    }
    else if (tipo=="Operario"){
        cout<<"Introduce el salario"<<endl; cin>>dinero;
        salario[salario.size()]=dinero; fflush(stdin);
        cout<<"Introduce la zona de la empresa"<<endl; cin>>zone;
        zona[zona.size()]=zone; fflush(stdin);
    }
    else if (tipo=="Becario"){
        cout<<"Introduce el salario"<<endl; cin>>dinero;
        salario[salario.size()]=dinero; fflush(stdin);
        cout<<"Introduce la universidad"<<endl; cin>>uni;
        zona[zona.size()]=uni; fflush(stdin);
        cout<<"Introduce el curso"<<endl; cin>>cur;
        curso[curso.size()]=cur; fflush(stdin);
        cout<<"Introduce la carrera"<<endl; cin>>carr;
        carrera[carrera.size()]=carr; fflush(stdin);
        cout<<"Introduce los meses de practicas"<<endl; cin>>mes;
        meses[meses.size()]=mes; fflush(stdin);
    }
    else if (tipo=="Directivo"){
        cout<<"Introduce la sede"<<endl; cin>>sed;
        sede[sede.size()]=sed; fflush(stdin);
    }
    cout<<laboratorio[0]<<meses[0]<<endl;
}
