/*
Implemente un programa que maneje un arreglo de estructuras que solicite
nombre, sexo y sueldo de los empleados de una empresa y debe mostrar por
pantalla el menor y mayor sueldo.*/
#include<iostream>
#include<string>
#include<vector>
using namespace std;

struct empleado{
	string nom;
	char sexo;
	float sueldo;
};

void mostrar(vector<empleado> aux){
	for(int i=0;i<aux.size();i++){
		cout<<"Nombre: "<<aux[i].nom<<"\n";
		cout<<"Sexo: "<<aux[i].sexo<<endl;
		cout<<"Sueldo: "<<aux[i].sueldo<<endl;
		cout<<"\n \n";
	}
}
void ordenar(vector<empleado> &_lista){
	for(int i=0;i<_lista.size();i++){
		empleado aux1;
		if(_lista[i].sueldo<_lista[i+1].sueldo){
			aux1=_lista[i];
			_lista[i]=_lista[i+1];
			_lista[i+1]=aux1;
		}
	}	
}
void ingresar(vector<empleado>& lista){
	string a;
	float b;
	char c;
	cout<<"Ingrese nombre del empleado(a): ";cin>>a;
	cout<<"Ingrese sexo del empleado (M/F): ";cin>>c;
	cout<<"Ingrese Sueldo ";cin>>b;
	empleado aux={a,c,b};
	lista.push_back(aux);
	
	
}
int main(){
	vector<empleado> lista1;
	char a;
	while(a!='n' && a!='N'){
		ingresar(lista1);
		cout<<"Desea ingresar otro empleado (Y/N)";
		cin>>a;
	}
	ordenar(lista1);
	mostrar(lista1);
	
	
	return 0;
}
