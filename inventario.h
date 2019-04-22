#include <iostream>

using namespace std;

// Composición

// PCB
class Pcb{
private:
    string memoria;
    string procesador;
    int potencia;
    int pines;
public:
    Pcb(string, string, int, int);
    void mostrarPCB();
};

// Constructor de PCB
Pcb::Pcb(string _memoria, string _procesador, int _potencia, int _pines){
    memoria = _memoria;
    procesador = _procesador;
    potencia = _potencia;
    pines = _pines;

}

// Métodos PCB
void Pcb::mostrarPCB(){
    cout<<"Memoria: "<<memoria<<"\nProcesador: "<<procesador<<"\nPotencia: "<<potencia<<"\nNúmero de pines: "<<pines<<endl;
}

// Carcasa
class Carcasa{
private:
    string material;
    float largo;
    float ancho;
    float grosor;
public:
    Carcasa(string, float, float, float);
    void mostrarCarcasa();
};

// Constructor de Carcasa
Carcasa::Carcasa(string _material, float _largo, float _ancho, float _grosor){
    material = _material;
    largo = _largo;
    ancho = _ancho;
    grosor = _grosor;
}

// Métodos de Carcasa
void Carcasa::mostrarCarcasa(){
    cout<<"Material: "<<material<<"\nLargo: "<<largo<<"\nAncho: "<<ancho<<"\nGrosor: "<<grosor<<endl;
}
// ECU
class Ecu{
private:
    string marca;
    string modelo;
    Pcb pcb;
    Carcasa carcasa;
public:
    Ecu(string, string, Pcb, Carcasa);
    void mostrarMateriales();
};

// Constructor de ECU
Ecu::Ecu(string _marca, string _modelo, Pcb _pcb, Carcasa _carcasa){
    marca = _marca;
    modelo = _modelo;
    pcb=_pcb;
    carcasa=_carcasa;
}

// Métodos de ECU
void Ecu::mostrarMateriales(){
    cout<<"Marca: "<<marca<<"\nModelo: "<<modelo<<endl;
    pcb.mostrarPCB();
    carcasa.mostrarCarcasa();
}

int main()
{
    Pcb p("eeprom","intel",84,122);
    Carcasa c("aluminio",541.1,456.3,51.2);
    Ecu e("intel","super",p,c);
    e.mostrarMateriales();
    return 0;
}
