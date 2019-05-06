#include "operario.h"

// Constructor de la clase Operario
Operario::Operario(string nombre, int edad, string DNI, float salario, string zona):Empleado(nombre, edad, DNI, salario){
    this->zona = zona;
}

// Métodos de Operario
vector<string> Operario::mostrarOperario(){
    vector<string> vaux = mostrarEmpleado();
    vaux.push_back("Zona: " + zona);
    return vaux;
}

string Operario::trabajar(){
    string trab = Persona::trabajar();
    trab="Puesto: Operario\nFuncion: Mantenimiento, montaje y alamacenaje";
    return trab;
}

int Operario::mostrarNombre(){ // Método para escribir los datos del operario en el fichero de órdenes
    vector <string> vaux = mostrarPersona();
    string nombre = vaux[0];
    string DNI = vaux[2];
    fstream fichero;
    string direccion = "C:\\Users\\WIN10PRO\\Desktop\\orden.txt";
    fichero.open(direccion,ios::out | ios::app);
    fichero<<"-Operario al cargo: \n\t"<<nombre<<"\n\t"<<DNI<<endl;
    fichero.close();
    return 0;
}
