#include <iostream>
#include <fstream>
#include <math.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>
using namespace std;

//EJERCICIO 1
/*
Asignar valores a dos variables enteras, intercambie estos valores almacenados
usando solo punteros a enteros.
*/
/*
int main(){
	int num=10,num1=11; 
	int* punt= &num;
	int* punt1= &num1;
	int* aux= NULL ;
	cout << "numero 1: "<<num<<"  "<<"Direccion: "<< punt<<"\n"; 
	cout << "numero 2: "<<num1<<"  "<<"Direccion: "<<punt1<<"\n"; 
	aux=punt;
	punt=punt1;
	punt1=aux;
	cout << "numero 1: "<<num<<"  "<<"Direccion: "<< punt<<"\n"; 
	cout << "numero 2: "<<num1<<"  "<<"Direccion: "<<punt1<<"\n";
	return 0;
}*/
//EJERCICIO 2
/*
Cree dos vectores con valores flotantes y asígnele valores aleatorios, para esto deberá
de asignar memoria a cada vector. Calcule el producto punto de vectores y muestre
por pantalla. Una vez finalizado este proceso, retire la memoria asignada a los
punteros. Repita este proceso de asignación y retiro de memoria dentro de un for de
1 000 000 veces.
*/
/*

int main(){
	srand(time(NULL));
	for(int i=0;i<100;i++){
		int* vector=NULL;
		int* vector1=NULL;
		vector= new int[2];
		vector1= new int[2];
		int prod=0;
		int num=1+rand()%(101-1);
		int num1=1+rand()%(101-1);
		int num2=1+rand()%(101-1);
		int num3=1+rand()%(101-1);
		vector[0]=num;
		vector[1]=num1;
		vector1[0]=num2;
		vector1[1]=num3;
		cout<<"Vector 1: ("<<vector[0]<<","<<vector[1]<<")\n";
		cout<<"Vector 2: ("<<vector1[0]<<","<<vector1[1]<<")\n";
		prod=(vector[0]*vector1[0])+(vector[1]*vector1[1]);
		cout<<"Producto punto:"<<prod<<"\n";cout<<"\n";
		delete [] vector;
		delete [] vector1;
		vector = NULL;
		vector1 = NULL;
	}
	return 0;
}*/
/*EJERCICIO 3
Construya una lista enlazada simple utilizando solo punteros. Añada las funciones de
insertar y eliminar un elemento. En la función insertar se debe asegurar que los
números insertados estén en orden creciente. Simule el proceso con 10000 números
aleatorios sin que el programa falle.
*/
/*
struct Nodo{
	int dato;
	Nodo *siguiente;
};
void insertar(Nodo *&lista,int n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato=n;
	
	Nodo *aux1=lista;
	Nodo *aux2;
	
	while((aux1 != NULL)&& (aux1->dato <n)){
		aux2=aux1;
		aux1=aux1->siguiente;
	}
	if(lista == aux1){
		lista = nuevo_nodo;
	}
	else{
		aux2->siguiente=nuevo_nodo;
	}
	nuevo_nodo->siguiente=aux1;
}

void mostrar(Nodo *lista){
	Nodo *actual=new Nodo();
	actual=lista;
	while(actual!=NULL){
		cout<<actual->dato<<"  ";
		actual=actual->siguiente;
	}
}

void eliminar(Nodo *&lista,int n){
	if(lista != NULL){
		Nodo *aux_borrar;
		Nodo *anterior=NULL;
		aux_borrar=lista;
		
		while((aux_borrar !=NULL)&& (aux_borrar->dato!=n)){
			anterior =aux_borrar;
			aux_borrar=aux_borrar->siguiente;
		}
		if(aux_borrar == NULL){
			cout<<" El elemento no existe \n";
		}
		else if(anterior == NULL){
			lista = lista ->siguiente;
			delete aux_borrar;
		}
		else{
			anterior->siguiente=aux_borrar->siguiente;
			delete aux_borrar;
		}
	}
}

int main(){
	int dato,num;
	Nodo *lista=NULL;
	for(int i=0;i<10;i++){
		cout<<"Ingrese un numero: ";
		cin>>dato;
		insertar(lista,dato);
	}
	mostrar(lista);
	cout<<"\n Ingrese un numero que desea eliminar: ";
	cin>>num;
	eliminar(lista,num);
	cout<<"Nueva lista: \n";
	mostrar(lista);
	lista=NULL;
	return 0;
}*/
/*
EJERCICIO 5
Implemente su propia función de concatenación de cadenas de texto especial (¡no es
la función ordinaria de concatenación!), recibirá como parámetro dos punteros de
caracteres y tendrá que asignar el contenido del segundo puntero al INICIO del primer
puntero. La función no retorna ningún valor.
*//*
struct Nodo{
	string dato;
	Nodo *siguiente;
};
void insertar(Nodo *&lista,string n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato=n;
	Nodo *aux1=lista;
	Nodo *aux2;
	
	while(aux1 != NULL){
		aux2=aux1;
		aux1=aux1->siguiente;
	}
	if(lista == aux1){
		lista = nuevo_nodo;
	}
	else{
		aux2->siguiente=nuevo_nodo;
	}
	nuevo_nodo->siguiente=aux1;
	
}
void mostrar(Nodo *lista){
	Nodo *actual=new Nodo();
	actual=lista;
	while(actual!=NULL){
		cout<<actual->dato<<"  ";
		actual=actual->siguiente;
	}
}


int main(){
	string dato;
	Nodo *lista=NULL;
	for(int i=0;i<4;i++){
		cout<<"Ingrese una palabra: ";
		cin>>dato;
		insertar(lista,dato);
	}
	mostrar(lista);
	lista=NULL;
	return 0;
}*/
/*
EJERCICIO 6
Utilizando punteros a funciones, implemente las funciones:
a. void sumar (int a, int b);
b. void restar (int a, int b);
c. void multiplicar (int a, int b);
d. void dividir (int a, int b);
Cree un vector de punteros a funciones e implemente un programa que permita la
invocación de cada función, pero a través del puntero.
*/
int suma(int a,int b){cout<<"suma de \n"<<a<<" y "<<b<<"\t";return a+b;}
int resta(int a,int b){cout<<"\nresta de \n"<<a<<" y "<<b<<"\t";return a-b;}
int multiplicar(int a,int b){cout<<"\nmultiplicacion de \n"<<a<<" y "<<b<<"\t";return a*b;}
int dividir(int a,int b){cout<<"\ndivision de \n"<<a<<" y "<<b<<"\t";return a/b;}
int main(){
	int(*ptr[4])(int,int)={suma,resta,multiplicar,dividir};
	for(int i=0;i<4;i++){
		cout<<ptr[i](8,4);
	}	
	return 0;
}