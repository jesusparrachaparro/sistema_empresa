#include "leer.h"

leer::leer()
{

}

int leer::leer_ficheros(vector <string> *profesion, vector <string> *nombre, vector <int> *edad, vector <string> *dni, vector <string> *sede, vector <float> *salario, vector <string> *laboratorio, vector <string> *zona, vector <string> *universidad, vector <int> *curso, vector <string> *carrera, vector <int> *meses)
{

    fstream fe; // Se crea la variable fichero
    string direccion="C:\\Users\\WIN10PRO\\Desktop\\fichero.txt"; // Se guarda la ruta donde se encuentra el fichero
    fe.open(direccion,ios::in); // Se abre el fichero para lectura

    while(!fe.eof()){ // Hasta que no termine de leerse el fichero no se podrá salir del bucle
        string cadena1;
        getline(fe,cadena1); // Se obtienen las filas una a una en cada iteración del bucle
        char cadena[100];
        strcpy(cadena,cadena1.c_str());
        char *token = strtok(cadena, ":"); // strtok se utiliza para obtener los caracteres que se encuentren entre dos puntos
        string trabajo(token);
        profesion->push_back(trabajo);
        int cont= 0;
        // Se van guardando los datos en sus respectivos contenedores de tipo vector
        while (token)
        {
            string palabra(token);
            if(cont==1){
                nombre->push_back(palabra);
            }else if(cont==2){
                int numero=atoi(token);
                edad->push_back(numero);
            }else if(cont==3){
                dni->push_back(palabra);
            }else if(cont==4){
                if(trabajo=="Directivo"){
                    sede->push_back(palabra);
                    salario->push_back(-1);
                }else{
                    sede->push_back("-1");
                    float numero=atof(token);
                    salario->push_back(numero);
                }
            }else if(cont==5){
                if(trabajo=="Ingeniero"){
                    laboratorio->push_back(palabra);
                    zona->push_back("-1");
                    universidad->push_back("-1");
                }else if(trabajo=="Operario"){
                    laboratorio->push_back("-1");
                    zona->push_back(palabra);
                    universidad->push_back("-1");
                }else if(trabajo=="Becario"){
                    laboratorio->push_back("-1");
                    zona->push_back("-1");
                    universidad->push_back(palabra);
                }else{ //if(trabajo=="Directivo"){
                    laboratorio->push_back("-1");
                    zona->push_back("-1");
                    universidad->push_back("-1");
                }
            }else if(cont==6){
                if(trabajo=="Becario"){
                    int numero=atoi(token);
                    curso->push_back(numero);
                }else{
                    curso->push_back(-1);
                }
            }else if(cont==7){
                if(trabajo=="Becario"){
                    carrera->push_back(palabra);
                }else{
                    carrera->push_back("-1");
                }
            }else if(cont==8){
                if(trabajo=="Becario"){
                    int numero=atoi(token);
                    meses->push_back(numero);
                }else{
                    meses->push_back(-1);
                }
            }

            token = strtok(NULL, ":");

            cont++;

        }
    }

    fe.close(); // Se cierra el fichero

    return 0;
}
