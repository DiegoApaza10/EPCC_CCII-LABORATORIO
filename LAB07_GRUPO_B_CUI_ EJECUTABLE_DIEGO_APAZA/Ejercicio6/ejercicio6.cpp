#include <iostream>
#include <string>
#include "Ave.h"
#include "Pato.h"
#include "Ganso.h"
#include "Gallina.h"
using namespace std;
int main(){
	Gallina gallo("Malaya","Espoloneadas",false);
	gallo.mostrar4();
	Pato a("Azulon","Palmeadas",true);
	a.mostrar3();
	Ganso b("Careto","Palmeadas",true);
	b.mostrar1();
    return 0;
}