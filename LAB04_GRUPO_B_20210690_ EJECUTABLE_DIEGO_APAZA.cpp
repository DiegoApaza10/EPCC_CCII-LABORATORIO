#include <iostream>
#include <fstream>
#include <cmath>
#include <time.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>
using namespace std;
/*
EJERCICIO 1
Escribir un programa donde se pueda ingresar los datos de tres personas, como el
nombre, apellido, edad y DNI y luego lo muestre por pantalla.*/
/*int main(){
	string nombre[3];
	string apellido[3];
	string DNI[3];
	
	for(int i = 0; i < 3; i++){
		cout << "Por favor ingrese la siguiente informacion s: \n";
		cout << "Nombre: ";
		getline(cin, nombre[i]);
		cout << " Apellido: ";
		getline(cin, apellido[i]);
		cout << " Dni: ";
		getline(cin, DNI[i]);
		
	}
	cout <<"Datos guardados: \n";
	for(int i = 0; i < 3; i++){
		cout<<"Nombre: "<<nombre[i] << "Apellido: "<< apellido[i]<< "Dni: "<<DNI[i];
		cout<<"\n ";
	}

	return 0;
}*/
//EJERCICIO 2
/*
Hacer un array unidimensional que acepte ocho números enteros. Luego le
pregunte al usuario que ingrese un número a buscar, implementar una función que
busque ese número, si lo encuentra, debe retornar un valor de verdaderos, en caso
contrario, retornar falso.*/
/*
int main(){
	int numeros[8],num,aux=0;
	for(int i = 0; i < 8; i++){
		cout << "Ingrese un numero: ";
		cin>>numeros[i];
	}
	cout << "numeros: ";
	for(int i = 0; i < 8; i++){
		cout<<numeros[i]<<" ";
		
	}
	cout<<"Ingrese un numero para verificar: ";cin>>num;
	for(int i = 0; i < 8; i++){
		if(num==numeros[i]){
			aux+=1;
		}
	}
	if(aux>0){
		cout<<"El numero esta en el arreglo";
	}
	else{
		cout<<"El numero NO esta en el arreglo";
	}
	
		
	return 0;
}*/
//EJERCICIO3
/*
int main(){
	int num[5][3],suma=0;
	for(int i = 0; i < 5; i++){
		for(int j= 0; j< 3;j++){
				cout << "Ingrese un numero: ";
				cin>>num[i][j];
		}
	}
	cout<<"Matriz: \n";
	for(int i = 0; i < 5; i++){
		for(int j= 0; j< 3;j++){
			cout<<num[i][j]<<" ";
		}
		cout<<"\n";
	}
	for(int i = 1; i < 5; i+=2){
		for(int j= 0; j< 3;j++){
			if(i<=5){
				suma+=num[i][j];
			}
		}
	}
	cout<<"SUMA DE FILAS: "<<suma;
	return 0;
}*/

int main(){
	int numeros[100];
	for(int i = 1; i <= 100; i++){
		numeros[i]=i;
	}
	cout<<"Descendente: ";
	for(int j = 100; j>= 0; j--){
		cout<<numeros[j]<<" ";
	}
	return 0;
}
//EJERCICIO 5
/*
int main(){
	string nombre[10];
	float precio[10];
	int stock[10];
	for(int i = 0; i <10; i++){
		cout<<"Ingrese un producto: ";
		//getline(cin,nombre[i]);
		cin>>nombre[i];
		cout<<"Ingrese su precio: ";
		cin>>precio[i];
		cout<<"Ingrese su stock: ";
		cin>>stock[i];
	}
	int aux,precioi,stocki,aux1,opcion;
	cout<<"Que desea hacer? :";
		cout<<"Buscar un producto (1) \n";
		cout<<"Cambiar el stock y precio (2) \n";
		cin>>opcion;
		string nom;
	while(opcion==1 || opcion==2){
		
	
		
		

		if(opcion==1){
			cout<<"escriba el nombre del producto ";
			cin>>nom;
			for(int i = 0; i <10; i++){
				if(nom==nombre[i]){
					aux+=1;
				}
			}
			if(aux1>0){cout<<"Si existe el producto: ";
			}	
			else{cout<<"No existe el producto: "; }
		}else{
			cout<<"escriba el nombre del producto ";
			cin>>nom;
			for(int i = 0; i <10; i++){
				if(nom==nombre[i]){
					aux=i;
				}
			}
			cout<<"Ingrese el precio nuevo: ";
			cin>>precioi;
			precioi=precio[aux];
			cout<<"Ingrese el nuevo stock: ";
			cin>>stocki;
			precioi=stock[aux];
		}
	}
	cout<<"Producto: "<<nombre[aux];
	cout<<"precio: "<<precio[aux];
	cout<<"Stock: "<<stock[aux];
	return 0;
}*/

//EJERCICIO 6
/*
int main(){
	int num[3][3],s=0,s1;
	for(int i = 0; i < 3; i++){
		for(int j= 0; j< 3;j++){
				cout << "Ingrese un numero: ";
				cin>>num[i][j];
		}
	}
	for(int i = 0; i < 3; i++){
		for(int j= 0; j< 3;j++){
				cout<<num[i][j]<<" ";
				s+=num[i][j];		
		}
		if(s>s1){
			s1=s;
		}
		s=0;
		cout<<"\n";
	}
	cout<<"Suma mayor: "<<s1;
	return 0;
}*/
