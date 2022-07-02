#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
using namespace std;
typedef struct nodo{
	string nombre=" ";
	struct nodo *sgte=NULL;	
	int stock=0;
	float precio=0;
	string codigo=" ";
}nodo;

//variable global 
nodo *cabeza=NULL;


void insertar(nodo **head,nodo *nodo){
	struct nodo **actual=head;
	while(*actual){
		actual=&((*actual)->sgte);
	}
	nodo->sgte=*actual;
	*actual = nodo;
}
void mostrar(nodo *cabeza){
	while(cabeza){
		cout<<"Nombre: "<<cabeza->nombre<<endl;
		cout<<"Precio: "<<cabeza->precio<<endl;
		cout<<"Stock: "<<cabeza->stock<<endl;
		cout<<"Codigo: "<<cabeza->codigo<<endl;
		cout<<"\n";
		cabeza=cabeza->sgte;
	}
	cout<<endl;
}

void producto_nuevo(){
	string nom,cod;
	int s;
	float p;
	cout<<"Ingrese nombre del producto: ";cin>>nom;
	cout<<"Ingrese precio del producto: ";cin>>p;
	cout<<"Ingrese stock del producto: ";cin>>s;
	cout<<"Ingrese codigo del producto: ";cin>>cod;
	cout<<endl;
	nodo* aux=new nodo{nom,NULL,s,p,cod};
	insertar(&cabeza,aux);
}

void modificar(string a,nodo * &cabeza){
	string nom;
	int u,i;
	if(a=="nombre"){
		cout<<"Ingrese nuevo nombre: ";cin>>nom;
		cabeza->nombre==nom;
	}
	if(a=="precio"){
		cout<<"Ingrese nuevo precio: ";cin>>u;
		cabeza->precio==u;
	}
	if(a=="cantidad"){
		cout<<"Ingrese nueva cantidad: ";cin>>i;
		cabeza->stock==i;
	}
}
void buscar(nodo *cabeza,string a){
	char op;
	string opc;
	while(cabeza){
		if(cabeza->nombre==a || cabeza->codigo==a){
			cout<<"Nombre: "<<cabeza->nombre<<endl;
			cout<<"Stock: "<<cabeza->stock<<endl;
			cout<<"Codigo: "<<cabeza->codigo<<endl;
			cout<<"\n";
			cout<<"Desea modificar algo?: \n y/n";
			cin>>op;
			if(op=='y'){
				cout<<"Que desea modificar? (nombre,cantidad,precio): ";cin>>opc;
				modificar(opc,cabeza);
			}
		}
		cabeza=cabeza->sgte;
	}
	cout<<endl;
}




int main(){

	nodo zapatilla={"Zapatillas",NULL,8,20.99,"XLS"};
	nodo camisa={"Camisas",NULL,9,12.82,"KYS"};
	nodo pantalon={"Pantalon",NULL,10,15.80,"OPS"};
	nodo polos={"Polos",NULL,20,12.8,"IUY"};
	nodo corbata={"Corbata",NULL,8,12.9,"COR"};
	nodo sombrero={"Sombrero",NULL,9,10.00,"SOM"};
	nodo cinturon={"Cinturon",NULL,10,8.6,"CIN"};
	nodo vestido={"Vestido",NULL,2,7.70,"VES"};
	nodo falda={"Falda",NULL,1,12.6,"FAL"};
	nodo blusa={"Blusa",NULL,7,10.7,"BLU"};
	insertar(&cabeza,&zapatilla);
	insertar(&cabeza,&camisa);
	insertar(&cabeza,&pantalon);
	insertar(&cabeza,&polos);
	insertar(&cabeza,&corbata);
	insertar(&cabeza,&sombrero);
	insertar(&cabeza,&cinturon);
	insertar(&cabeza,&vestido);
	insertar(&cabeza,&falda);
	insertar(&cabeza,&blusa);
	mostrar(cabeza);
	//FUNCION PARA INGRESAR PRODUCTO NUEVO
	//producto_nuevo();
	//mostrar(cabeza);
	
	buscar(cabeza,"Vestido");
	buscar(cabeza,"BLU");
	//mostrar(cabeza);*/
	return 0;
}
