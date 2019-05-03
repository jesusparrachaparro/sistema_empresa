#include "escribir.h"

escribir::escribir()
{

}

int escribir::escribir_ficheros(vector <string> profesion, vector <string> nombre, vector <int> edad, vector <string> dni, vector <string> sede, vector <float> salario, vector <string> laboratorio, vector <string> zona, vector <string> universidad, vector <int> curso, vector <string> carrera, vector <int> meses)
{

    fstream fs;
    string direccion="C:\\Users\\WIN10PRO\\Desktop\\fichero.txt";
    fs.open(direccion,ios::trunc | ios::out);

    for(int i=0;i<profesion.size();i++){
        int cont=0;
        while(cont<9){
            if(cont==0){
                fs<<profesion[i]<<":";
            }else if(cont==1){
                fs<<nombre[i]<<":";
            }else if(cont==2){
                fs<<edad[i]<<":";
            }else if(cont==3){
                fs<<dni[i]<<":";
            }else if(cont==4){
                if(sede[i]=="-1"){
                    fs<<salario[i]<<":";
                }else{
                    fs<<sede[i]<<":";
                }
            }else if(cont==5){
                int contaux=0;
                if(laboratorio[i]!="-1"){
                    fs<<laboratorio[i]<<":";
                    contaux++;
                }else if(zona[i]!="-1"){
                    fs<<zona[i]<<":";
                    contaux++;
                }else if(universidad[i]!="-1"){
                    fs<<universidad[i]<<":";
                    contaux++;
                }

                if(contaux==0){
                    fs<<" :";
                }
            }else if(cont==6){
                if(curso[i]==-1){
                    fs<<" :";
                }else{
                    fs<<curso[i]<<":";
                }
            }else if(cont==7){
                if(carrera[i]=="-1"){
                    fs<<" :";
                }else{
                    fs<<carrera[i]<<":";
                }
            }else if(cont==8){
                if(meses[i]==-1){
                    fs<<" ";
                }else{
                    fs<<meses[i];
                }

                if(i!=profesion.size()-1){
                    fs<<endl;
                }
            }
            cont++;
        }
    }

    fs.close();

    return 0;
}
