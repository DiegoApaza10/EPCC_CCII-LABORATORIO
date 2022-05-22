#include "ClaseDisco.h"
#include <iostream>
#include <string>
using namespace std;
int main(){
	ClaseMultimedia b(58,"Gigabyte");
	b.mostrar1();
	cout<<"\n";
	ClaseDisco a("Gigabyte",58,50);
	a.mostrar();
    return 0;
}