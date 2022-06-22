/*Implemente un programa que maneje un arreglo de estructuras que solicite el
nombre, edad y talla de 10 jugadores, debe mostrar por pantalla los que son
menores de 20 anos y tienen una talla mayor a 1,70 mts de altura.*/
#include<iostream>
#include<string>
using namespace std;

struct persona{
	string nom;
	float talla;
	int edad;
};

void mostrar(persona aux){
	cout<<"Nombre: "<<aux.nom<<"\n";
	cout<<"Edad: "<<aux.edad<<endl;
	cout<<"Talla: "<<aux.talla<<endl;
	cout<<"\n \n";
}



int main(){
	int n;
	cout<<"Ingrese cantidad de personas: ";cin>>n;
	persona lista[n];
	for(int i=0;i<n;i++){
		cout<<"Ingrese su nombre: ";cin>>lista[i].nom;
		cout<<"Ingrese su edad ";cin>>lista[i].edad;
		cout<<"Ingrese su talla: ";cin>>lista[i].talla;
	}
	cout<<"Personas calificadas: \n";
	for(int i=0;i<n;i++){
		if(lista[i].edad<20 and lista[i].talla>1.7){
			mostrar(lista[i]);
		}
	}
}

