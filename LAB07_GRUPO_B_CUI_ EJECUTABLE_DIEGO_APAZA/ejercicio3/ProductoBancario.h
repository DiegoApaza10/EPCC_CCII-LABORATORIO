#include <iostream>
#include <string>
using namespace std;
class ProductoBancario{
	private:
		string cliente;
		double saldo;
		int numProductos;
	public:
		ProductoBancario(string,double,int);
		void imprimir();
		~ProductoBancario();
};

ProductoBancario::ProductoBancario(string _cliente,double _saldo,int _numProductos){
	cliente=_cliente;
	saldo=_saldo;
	numProductos=_numProductos;
}
void ProductoBancario::imprimir(){
	cout<<"Cliente: "<<cliente<<endl;
	cout<<"Saldo: "<<saldo<<endl;
	cout<<"numProductos: "<<numProductos<<endl;
}
ProductoBancario::~ProductoBancario(){}