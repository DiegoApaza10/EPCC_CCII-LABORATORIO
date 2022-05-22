#include <iostream>
#include <string>
using namespace std;
class Hipoteca:public Prestamo{
	public:
		Hipoteca(string,double,int);
		void imprimir();
		~Hipoteca();	
};
Hipoteca::Hipoteca(string d1,double d2,int d3):Prestamo(d1,d2,d3){}
void Hipoteca::imprimir(){
	ProductoBancario::imprimir();
}
Hipoteca::~Hipoteca(){};