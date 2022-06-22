/*
Implementar un programa que maneje un arreglo de estructuras para almacenar
los nombres y las fechas de cumpleanos de sus n companeros. Y debe mostrarse
por pantalla quienes cumplen anos en este mes.
*/
#include<iostream>
#include<string>
using namespace std;

struct estudiante{
	int dia;
	int mes;
	int ano;
	string nombre;
};

void mostrar(estudiante aux){
	cout<<"fecha de cumpleanos: "<<aux.dia<<" / "<<aux.mes<<" / "<<aux.ano<<endl;
	cout<<"Nombre: "<<aux.nombre<<"\n \n";
}

int main(){
	int n;
	cout<<"Ingrese cantidad de estudiantes: ";cin>>n;
	estudiante lista[n];
	string nom;
	int a,b,c;
	for(int i=0;i<n;i++){
		cout<<"Ingrese su nombre: ";cin>>nom;
		cout<<"Ingrese su fecha de cumpleanos (dia,mes,ano):\n";
		cout<<"Dia: ";cin>>a;
		cout<<"Mes: ";cin>>b;
		cout<<"Ano: ";cin>>c;
		estudiante aux={a,b,c,nom};
		lista[i]=aux;
	}
	cout<<"Personas que cumplen anos este mes: \n";
	for(int i=0;i<n;i++){
		if(lista[i].mes==6){
			mostrar(lista[i]);
		}
	}
	
	
	
	return 0;
}
