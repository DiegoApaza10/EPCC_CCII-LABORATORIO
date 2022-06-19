#include <iostream>
#include "lista.h"

using namespace std;
int main(){
	Lista<int> pilas;
	pilas.anadir(5);
	pilas.anadir(6);
	pilas.anadir(8);
	pilas.anadir(9);
	pilas.anadir(1);
	pilas.anadir(0);
	pilas.buscar(6);
	pilas.mostrar();
	pilas.eliminar();
	pilas.mostrar();
	pilas.buscar(6);
	/*pilas.anadir(3);
	pilas.anadir(7);
	pilas.mostrar();*/
	return 0;
}
