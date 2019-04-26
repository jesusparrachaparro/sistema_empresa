#include <iostream>
#include "becario.h"
#include "directivo.h"
#include "ingeniero.h"
#include "operario.h"

using namespace std;

int main(){
    Becario b("jesus",21,"71366587w",598.95,"UCLM",4,"Electronica",3);
    b.mostrarBecario();
    Directivo d("pepito",21,"5412256","creal");
    d.mostrarDirectivo();
    d.trabajar();
}
