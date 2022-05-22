#include <iostream>
#include <string>

using namespace std;
class Cuadrado:public Rectangulo{
	private:
		float L;
	public:
		Cuadrado(string,string,int,int,float,float);
		void imprimir();
		~Cuadrado();
};
Cuadrado::Cuadrado(string h1,string h2,int h3,int h4,float h5,float h6):Rectangulo(h1,h2,h3,h4,h5,h6){
	L=h5;
}
void Cuadrado::imprimir(){
	Forma::imprimir();
	cout<<"Lado: "<<L<<endl;
}
Cuadrado::~Cuadrado(){}