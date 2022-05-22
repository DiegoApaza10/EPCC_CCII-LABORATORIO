#include <iostream>
#include <string>
using namespace std;
class Cuenta:public ProductoBancario{	
	public:
		Cuenta(string,double,int);
		void imprimir();
		~Cuenta();
};
Cuenta::Cuenta(string v1,double v2,int v3):ProductoBancario(v1,v2,v3){}
void Cuenta::imprimir(){
	imprimir();
}
Cuenta::~Cuenta(){}