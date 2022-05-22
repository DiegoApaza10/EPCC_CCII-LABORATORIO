#include <iostream>
#include <string>
using namespace std;
class Prestamo:protected ProductoBancario{
	public:
		Prestamo(string,double,int);
		void imprimir();
		~Prestamo();	
};
Prestamo::Prestamo(string c1,double c2,int c3):ProductoBancario(c1,c2,c3){}
void Prestamo::imprimir(){
	imprimir();
}
Prestamo::~Prestamo(){}