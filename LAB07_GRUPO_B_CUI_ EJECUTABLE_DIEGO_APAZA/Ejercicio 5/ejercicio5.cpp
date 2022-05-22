#include "operacionBase.h"
#include "operacionFactorial.h"
#include <iostream>
#include <string>
using namespace std;
int main(){
	operacionBase a;
	a.setOperador(5);
	//cout<<a.getOperator()<<endl;
	operacionFactorial b;
	b.setOperador(5);
	cout<<b.devolverFactorial();
    return 0;
}