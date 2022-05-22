
#include <iostream>
#include <string>
using namespace std;
class Forma{
	private:
		string color;
		string nombre;
		pair<int,int> centro;
	public:
		Forma(string,string,int,int);
		void imprimir();
		string getcolor();
		void cambiarCentro(int,int);
		void cambiarColor(string);
		~Forma();
};
Forma::Forma(string a,string c,int _x,int _y){
	color=a;
	nombre=c;
	centro.first=_x;
	centro.second=_y;
}
void Forma::imprimir(){
	cout<<"Color: "<<color<<endl;
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Centro: ("<<centro.first<<","<<centro.second<<")"<<endl;
}
void Forma::cambiarCentro(int x,int y){
	centro.first=x;
	centro.second=y;
	imprimir();
}
string Forma::getcolor(){
	return color;
}
void Forma::cambiarColor(string p){
	color=p;
}
Forma::~Forma(){}