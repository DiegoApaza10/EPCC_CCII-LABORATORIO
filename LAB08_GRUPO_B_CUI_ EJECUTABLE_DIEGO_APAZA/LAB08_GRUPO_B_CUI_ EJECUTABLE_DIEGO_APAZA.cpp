#include "polimorfismo.h"
#include "Rectangulo.h"
#include "Elipse.h"
#include "Circulo.h"
#include "Cuadrado.h"
#include <iostream>
#include <vector>
using namespace std;
void area_mayor(vector<Forma*> b){
	float a1,a2;
	Rectangulo* rectangulo=(Rectangulo*)b[0];
	Elipse* elipse=(Elipse*)b[1];
	a1=rectangulo->area();
	a2=elipse->area();
	cout<<"Elipse: "<<a2<<endl;
	cout<<"Rectangulo: "<<a1<<endl;
	if(a1>a2){
		cout<<"El mayor area es del rectangulo \n";
	}else{
		cout<<"El mayor area es del elipse \n";
	}
}

int main()
{
	Forma a("Rojo","Rectangulo",5,9);
	a.imprimir();
	cout<<"Color desde el main: "<<a.getcolor()<<endl;
	a.cambiarCentro(8,9);
	cout<<"\n";
	a.cambiarColor("Cafe");
	a.imprimir();
	cout<<"\n";
	Rectangulo b("Verde","Rectangulo",5,9,10,20);
	b.imprimir();
	cout<<"\n";
	cout<<"El area es: "<<b.area()<<endl;
	cout<<"El perimetro es: "<<b.perimetro();
	b.escala(2);
	cout<<"\n";
	b.imprimir();
	cout<<"\n";
	cout<<"\n";
	Elipse n("Azul","Elipse",3,9,32,8);
	n.imprimir();
	cout<<"El area es: "<<n.area()<<endl;
	cout<<"\n";
	cout<<"\n";
	circulo m("Azul","Circulo",3,9,8,8);
	m.imprimir();
	cout<<"\n";
	cout<<"\n";
	Cuadrado k("Rojo","Cuadrado",3,9,10,10);
	k.imprimir();
	cout<<"\n";
	cout<<"\n";
	/*
	vector<Forma*> vect;
	Rectangulo* p1=new Rectangulo("Verde","Rectangulo",5,9,10,20);
	Elipse* e1=new Elipse("Azul","Elipse",3,9,32,8);
	Cuadrado* p2=new Cuadrado("Rojo","Cuadrado",3,9,10,10);
	vect.push_back(p1);
	vect.push_back(e1);
	vect.push_back(p2);
	cout<<"\n";
	cout<<"\n";
	area_mayor(vect);

	delete p1;
	delete p2;
	delete e1;
	return 0;*/
}