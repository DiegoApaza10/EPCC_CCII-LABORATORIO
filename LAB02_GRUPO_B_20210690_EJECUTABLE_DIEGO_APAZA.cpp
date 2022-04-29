#include <iostream>
#include <fstream>
#include <math.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>
using namespace std;

int main(){
//EJERCICIO 1
/*  Sumar todos los enteros pares desde 2 hasta 100.*/
/*
	int s=0;
	for(int i=2;i<=100;i++){
		if(i%2==0){
			s+=i;
		}
	}
	cout<<"La suma es "<<s;
*/

//EJERCICIO 2
//Calcule los primeros 50 números primos y muestre el resultado en pantalla.
/*
	int cont=0;
	for(int i=1;i<=200;i++){
		for(int j=1;j<=i;j++){
			if(i%j==0){
				cont++;
			}
		}
		if(cont<=2){
			cout<<i<<" - ";
		}
		cont=0;
	}
*/
//EJERCICIO 3
/*  Escribir un programa que visualice en pantalla los números múltiplos de 5
comprendidos entre 1 y 100.*/

/*	for(int i=1;i<=100;i++){
		if(i*5<=100){
			cout<<i*5<<" - ";
		}
	}*/

//EJERCICIO 4

/*Escriba un código que solicite ingresar dos números �
x y Y, tal que x < y. Muestre todos los números primos que se encuentren 
entre el rango de valores, de no
encontrarse, mostrar el primo más cercano a x o y
*/
/*
int x,y,cont=0,cont2=0,cont3=0;
	cout<<"Ingrese un numero ";cin>>x;
	cout<<"Ingrese otro numero ";cin>>y;
	for(int i=x;i<=y;i++){
		for(int j=1;j<=i;j++){
			if(i%j==0){
				cont++;
			}
		}
		if(cont<=2){
			cout<<i<<" - ";
			cont2++;
		}
		cont=0;
	}
	if(cont2==0){
		cont3==0;
		while(cont3<=2){
			for(int k=1;k<=x;k++){
				if(x%k==0){
					cont3++;
				}
			}
		}
	}
	*/
	//EJERCICIO 5
//Elabore un programa que lea n números y 
//determine cuál es el mayor, el menor y la
//media de los números leídos.
/*
	int n,num,s=0,mayor=0,menor=0,prom; 
	cout<<"Cantidad de numero que quiere ingresar ";cin>>n;
	for(int i=n;i>0;i--){
		cout << "ingrese un numero: ";cin>>num;
		s=s+num;
		if (num >=mayor){
			mayor = num;
		}
		if (num <menor){
			menor = num;
		}
			
	}
	prom=s/n;
	cout<<"El MAYOR ES: "<<mayor<<"\n";
	cout<<"El MENOR ES: "<<menor<<"\n";
	cout<<"EL PROMEDIO ES "<<prom<<"\n";
	*/
//EJERCICIO 6

/*Elabore un programa que calcule la serie de Fibonacci. La serie de Fibonacci es la
sucesión de números: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ... Cada número se calcula sumando
los dos anteriores a él.*/
/*
	int n,a=0,b=1,s=0;
	cout<<"Ingrese la cantidad de terminos que quiera ver ";cin>>n;
	cout<<"0 - 1 - ";
	for(int i=1;i<=n-2;i++){
		s=a+b;
		cout<<s<<" - ";
		a=b;
		b=s;
		
	}*/

//EJERCICIO 7
//Calcula el promedio de 3 notas para n estudiantes.
	int n,nota,s=0,prom;
	cout<<"Ingrese la cantidad de estudiantes ";cin>>n;
	for(int i=n;i<=n;i++){
		for(int j=0;j<3;j++){
			cout<<"Ingrese la  nota numero "<<j+1<<" ";cin>>nota;
			s=s+nota;
		}
		prom=s/3;
		cout<<"Promedio del estudiante: "<<prom;
	}
//EJERCICIO 8
/*Escribir un programa que genere la tabla de multiplicar de un número introducido por
el teclado.*/
/*
	int n;
	cout<<"INGRESE EL NUMERO: ";cin>>n;
	for(int i=0;i<11;i++){
		cout<<i<<" * "<<n<<" = "<<i*n<<"\n";
	}
	*/
	return 0;
}