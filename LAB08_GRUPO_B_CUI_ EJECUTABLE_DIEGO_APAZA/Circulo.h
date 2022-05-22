#include <iostream>
#include <string>

using namespace std;
class circulo:public Elipse{
	private:
		float Radio;
	public:
		circulo(string,string,int,int,float,float);
		void imprimir();
		~circulo();	
};

circulo::circulo(string m1,string m2,int m3,int m4,float m5,float m6):Elipse(m1,m2,m3,m4,m5,m6){
	Radio=m6;
}
void circulo::imprimir(){
	Forma::imprimir();
	cout<<"Radio: "<<Radio<<endl;
}

circulo::~circulo(){}