#include <iostream>
#include <string>
using namespace std;
class ClaseMultimedia {
	private:
		float precio;
		string marca;
	public:
		ClaseMultimedia(float,string);
		void mostrar1();
		~ClaseMultimedia();	
};
ClaseMultimedia::ClaseMultimedia(float a,string b){
	precio=a;
	marca=b;
}
void ClaseMultimedia::mostrar1(){
	cout<<"Tipo: "<<marca<<endl;
	cout<<"Precio: "<<" s/."<<precio<<endl;
}

ClaseMultimedia::~ClaseMultimedia(){}