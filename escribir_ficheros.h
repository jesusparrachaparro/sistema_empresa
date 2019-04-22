#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    vector <string> profesion={"Directivo","Operario","Ingeniero","Becario"};
    vector <string> nombre={"Juan Francisco","María","Jesús","Rafael"};
    vector <int> edad={42,21,23,35};
    vector <string> dni={"1111A","2222B","3333C","4444D"};
    vector <int> salario={-1,1100,1600,700};
    vector <string> sede={"Madrid","-1","-1","-1"};
    vector <string> laboratorio={"-1","-1","Electrónica","-1"};
    vector <string> zona={"-1","Montaje","-1","-1"};
    vector <string> universidad={"-1","-1","-1","UCLM"};
    vector <int> curso={-1,-1,-1,4};
    vector <string> carrera={"-1","-1","-1","Ingeniería Industrial"};
    vector <int> meses={-1,-1,-1,2};

    ofstream fs("C:\\Users\\USUARIO\\Desktop\\fichero.txt");

    for(int i=0;0<profesion.size();i++){
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
                    fs<<" "<<endl;
                }else{
                    fs<<meses[i]<<endl;
                }
            }
            cont++;
        }
    }

    return 0;
}
