/*Implemente un programa que maneje un arreglo de estructuras que solicite el
nombre, edad y talla de 10 jugadores, debe mostrar por pantalla los que son
menores de 20 anos y tienen una talla mayor a 1,70 mts de altura.*/
#include<iostream>
#include<string>
#include<vector>
using namespace std;

struct persona{
	string nom;
	float talla;
	int edad;
};

void mostrar(vector<persona> aux){
	for(int i=0;i<aux.size();i++){
		cout<<"Nombre: "<<aux[i].nom<<"\n";
		cout<<"Talla: "<<aux[i].talla<<endl;
		cout<<"Edad: "<<aux[i].edad<<endl;
		cout<<"\n \n";
	}
}
void personas_calificadas(vector<persona> aux){
	cout<<"Personas calificadas: \n";
	vector<persona> lista2;
	for(int i=0;i<aux.size();i++){
		if(aux[i].edad<20 and aux[i].talla>1.7){
			lista2.push_back(aux[i]);
		}
	}
	mostrar(lista2);
}

void ingresar(vector<persona>& lista){
	string a;
	float b;
	int c;
	cout<<"Ingrese nombre del jugador: ";cin>>a;
	cout<<"Ingrese la edad: ";cin>>c;
	cout<<"Ingrese talla: ";cin>>b;
	persona aux={a,b,c};
	lista.push_back(aux);
}


int main(){
	vector<persona> lista1;
	char a;
	while(a!='n' && a!='N'){
		ingresar(lista1);
		cout<<"Desea ingresar otro empleado (Y/N)";
		cin>>a;
	}
	ingresar(lista1);
	personas_calificadas(lista1);
	
}

