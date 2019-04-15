#include <iostream>
#include <fstream>
#include <vector>
#include <cstring>
#include <string>

using namespace std;

int main()
{

    ifstream fe("fichero.txt");
    vector <string> nombre;
    vector <string> apellido1;
    vector <string> apellido2;
    vector <string> edad;

    while(!fe.eof()){
        string cadena1;
        getline(fe,cadena1);
        char cadena[100];
        strcpy(cadena,cadena1.c_str());
        char *token = strtok(cadena, ":");
        int cont= 0;
        while (token)
        {

            string palabra(token);
            if(cont==1){
                nombre.push_back(palabra);
            }
            if(cont==2){
                apellido1.push_back(palabra);
            }
            if(cont==3){
                apellido2.push_back(palabra);
            }
            if(cont==4){
                edad.push_back(palabra);
            }
            token = strtok(NULL, ":");

            cont++;

        }
    }


    for (int i =0;i<nombre.size();i++){
        cout<<nombre[i]<<endl;
    }
    return 0;
}
