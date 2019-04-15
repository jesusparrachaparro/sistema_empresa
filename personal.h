// Clases para definir los atributos del personal

#include <iostream>

using namespace std;

// Superclase Persona
class Persona{
private:
    string nombre;
    int edad;
    string DNI;
public:
    Persona(string, int, string);
    void mostrarPersona();
};

// Constructor de la superclase Persona
Persona::Persona(string _nombre, int _edad, string _DNI){
    nombre = _nombre;
    edad = _edad;
    DNI = _DNI;
}

// Métodos de Persona
void Persona::mostrarPersona(){
    cout<<"Nombre: "<<nombre<<"\nDNI: "<<DNI<<"\nEdad: "<<edad<<endl;
}

// CLASES HIJAS (nivel 1)

// Clase hija Directivo
class Directivo : public Persona{
private:
    string sede; // ciudad de la empresa del directivo
public:
    Directivo(string, int, string, string);
    void mostrarDirectivo();
};

// Constructor de la clase Directivo
Directivo::Directivo(string _nombre, int _edad, string _DNI, string _sede):Persona(_nombre, _edad, _DNI){
    sede = _sede;
}

// Métodos clase Directivo
void Directivo::mostrarDirectivo(){
    mostrarPersona();
    cout<<"Sede: "<<sede<<endl;
}

// Clase hija Empleado
class Empleado : public Persona{
private:
    float salario;
public:
    Empleado(string, int, string, float);
    void mostrarEmpleado();
};

// Constructor de la clase Empleado
Empleado::Empleado(string _nombre, int _edad, string _DNI, float _salario):Persona(_nombre, _edad, _DNI){
    salario = _salario;
}

// Métodos de Empleado
void Empleado::mostrarEmpleado(){
    cout<<"Salario: "<<salario<<endl;
}

// Clase hija Estudiante
class Estudiante : public Persona{
private:
    string universidad;
    int curso;
    string carrera;
public:
    Estudiante(string, int, string, string, int, string);
    void mostrarEstudiante();
};

// Constructor de la clase Estudiante
Estudiante::Estudiante(string _nombre, int _edad, string _DNI, string _universidad, int _curso, string _carrera):Persona(_nombre, _edad, _DNI){
    universidad = _universidad;
    curso= _curso;
    carrera = _carrera;
}

// Métodos de Estudiante
void Estudiante::mostrarEstudiante(){
    mostrarPersona();
    cout<<"Universidad: "<<universidad<<"\nCarrera: "<<carrera<<"\nCurso: "<<curso<<endl;
}

// CLASES HIJAS (nivel 2)

// Clase hija Ingeniero
class Ingeniero : public Empleado{
private:
    string laboratorio; // laboratorio en el que trabaja: electrónica, mecánica, informática, eléctrica, etc.
public:
    Ingeniero(string, int, string, float, string);
    void mostrarIngeniero();
};

// Constructor de la clase Ingeniero
Ingeniero::Ingeniero(string _nombre, int _edad, string _DNI, float _salario, string _laboratorio):Empleado(_nombre, _edad, _DNI, _salario){
    laboratorio = _laboratorio;
}

// Métodos de Ingeniero
void Ingeniero::mostrarIngeniero(){
    mostrarPersona();
    mostrarEmpleado();
    cout<<"Laboratorio: "<<laboratorio<<endl;
}

// Clase hija Operario
class Operario : public Empleado{
private:
    string zona; // zona de la empresa en la que trabaja: almacén, mantenimiento, montaje, etc.
public:
    Operario(string, int, string, float, string);
    void mostrarOperario();
};

// Constructor de la clase Operario
Operario::Operario(string _nombre, int _edad, string _DNI, float _salario, string _zona):Empleado(_nombre, _edad, _DNI, _salario){
    zona = _zona;
}

// Métodos de Operario
void Operario::mostrarOperario(){
    mostrarPersona();
    mostrarEmpleado();
    cout<<"Zona: "<<zona<<endl;
}

// Clase hija Becario en prácticas (herencia múltiple)
class Becario : public Empleado, public Estudiante{
private:
    int meses; // meses de prácticas
public:
    Becario(string, int, string, float, string, int, string, int);
    void mostrarBecario();
};

// Constructor de la clase Becario en prácticas
Becario::Becario(string _nombre, int _edad, string _DNI, float _salario, string _universidad, int _curso, string _carrera, int _meses):Empleado(_nombre, _edad, _DNI, _salario), Estudiante(_nombre, _edad, _DNI, _universidad, _curso, _carrera ){
    meses = _meses;
}

// Métodos Becario
void Becario::mostrarBecario(){
    mostrarEmpleado();
    mostrarEstudiante();
    cout<<"Meses: "<<meses<<endl;
}
