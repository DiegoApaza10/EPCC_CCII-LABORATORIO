/*
Implementar un programa que maneje un arreglo de estructuras para almacenar
los nombres y las fechas de cumpleanos de sus n companeros. Y debe mostrarse
por pantalla quienes cumplen anos en este mes.
*/
#include<iostream>
#include<string>
#include<vector>
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
void cumpleanos(vector<estudiante>lista){
	cout<<"Personas que cumplen anos este mes: \n";
	for(int i=0;i<lista.size();i++){
		if(lista[i].mes==6){
			mostrar(lista[i]);
		}
	}
}
void ingresar(vector<estudiante>& lista){
	string nom;
	int a,b,c;
	cout<<"Ingrese su nombre: ";cin>>nom;
	cout<<"Ingrese su fecha de cumpleanos (dia,mes,ano):\n";
	cout<<"Dia: ";cin>>a;
	cout<<"Mes: ";cin>>b;
	cout<<"Ano: ";cin>>c;
	estudiante aux={a,b,c,nom};
	lista.push_back(aux);
}

int main(){
	vector<estudiante> lista1;
	char a;
	while(a!='n' && a!='N'){
		ingresar(lista1);
		cout<<"Desea ingresar otro empleado (Y/N)";
		cin>>a;
	}
	cumpleanos(lista1);
	

	
	
	
	return 0;
}
