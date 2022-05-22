#include "ProductoBancario.h"
#include "CuentaJoven.h"
#include "Prestamo.h"
#include "Hipoteca.h"
#include <iostream>
#include <string>
using namespace std;
int main(){
	ProductoBancario a("Diego",5464,5);
	a.imprimir();
	cout<<"\n";
	Hipoteca b("Diego",545644,5);
	b.imprimir();

    return 0;
}