/*
Implemente un programa que maneje un arreglo de estructuras que solicite
nombre, sexo y sueldo de los empleados de una empresa y debe mostrar por
pantalla el menor y mayor sueldo.*/
#include<iostream>
#include<string>
using namespace std;

struct empleado{
	string nom;
	char sexo;
	float sueldo;
};

void mostrar(empleado aux[],int n){
	for(int i=0;i<n;i++){
		cout<<"Nombre: "<<aux[i].nom<<"\n";
		cout<<"Sexo: "<<aux[i].sexo<<endl;
		cout<<"Sueldo: "<<aux[i].sueldo<<endl;
		cout<<"\n \n";
	}
}
void ordenar(empleado _lista[],int n){
	int i=0;
	while(i<n){
		empleado aux1;
		if(_lista[i].sueldo<_lista[i+1].sueldo){
			aux1=_lista[i];
			_lista[i]=_lista[i+1];
			_lista[i+1]=aux1;
		}
		i++;
	}	
}

int main(){
	int n;
	cout<<"Ingrese cantidad de personas: ";cin>>n;
	empleado lista[n];
	for(int i=0;i<n;i++){
		cout<<"Ingrese nombre del empleado(a): ";cin>>lista[i].nom;
		cout<<"Ingrese sexo del empleado (M/F): ";cin>>lista[i].sexo;
		cout<<"Ingrese Sueldo ";cin>>lista[i].sueldo;
	}
	ordenar(lista,n);
	mostrar(lista,n);
	
	
	
	return 0;
}
