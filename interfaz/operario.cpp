#include "operario.h"

// Constructor de la clase Operario
Operario::Operario(string nombre, int edad, string DNI, float salario, string zona):Empleado(nombre, edad, DNI, salario){
    this->zona = zona;
}

// Métodos de Operario
vector<string> Operario::mostrarOperario(){
    vector<string> vaux = mostrarPersona();
    vaux = mostrarEmpleado();
    vaux.push_back("Zona: " + zona);
    return vaux;
}

string Operario::trabajar(){
    string trab = Persona::trabajar();
    trab="Funcion: Mantenimiento, montaje y alamacenaje.";
    return trab;
}

int Operario::mostrarNombre(){
    vector <string> vaux = mostrarPersona();
    string nombre = vaux[0];
    string DNI = vaux[2];
    fstream fichero;
    fichero.open("C:\\Users\\USUARIO\\Desktop\\orden.txt",ios::out | ios::app);
    fichero<<"-Operario al cargo: \n\tNombre: "<<nombre<<"\n\tDNI: "<<DNI<<endl;
    fichero.close();

}
