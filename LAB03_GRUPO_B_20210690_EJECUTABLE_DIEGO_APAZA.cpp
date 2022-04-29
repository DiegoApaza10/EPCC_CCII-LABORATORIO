#include <iostream>
#include <conio.h>
#include <math.h>
#include <string>

using namespace std;
//ALUMNO: APAZA ANDALUZ DIEGO FRANCISCO
//CUI: 20210690

	//EJERCICIO 1
/*Hacer un programa que sin usar la función pow(), pero por medio de una función,
calcule la potencia de un número (ambos números ingresados por teclado).
*/

int potencia(int a,int b){//base;exponente
		int res=1;
		for(int i=0;i<b;i++){
			res=res*a;
		}
		return res;
}
int main(){
	int num,base;
	cout<<"Ingrese un numero(base): ";cin>>num;
	cout<<"Ingrese el exponente: ";cin>>base;
	cout<<"El resultado es: "<<potencia(num,base);
	return 0;
}




//EJERCICIO 2
/*
Hacer un programa que lea por teclado un año, calcule y muestre si es bisiesto. Para
realizar el cálculo utiliza una función llamada bisiesto. La función bisiesto recibe el
año leído por teclado, comprueba si es o no bisiesto.

*/
/*
void bisiesto(int a){

	if(a%4==0 && a%100!=0 || a%100==0){
		cout << "Es Bisiesto" << endl;
	}
	else{
		cout << "No es bisiesto" << endl;
	}
}
int main(){
	int fecha;
	cout<<"Ingrese una fecha: ";cin>>fecha;
	bisiesto(fecha);
	
	return 0;
}*/
//EJERCICIO 3
/*
Hacer un programa que lee por teclado la fecha actual y la fecha de nacimiento de
una persona y por medio de una función calcule su edad en años, meses y días
*/
/*
void  calcule_su_edad(int a,int b,int c,int x,int y,int z){
	int q,w,e;
	q=a-x;
	w=b-y;
	if(w<0){w*=-1;};
	e=c-z;
	if(e<0){e*=-1;};
	cout<<"Tiene "<<q<<" anios, \n";
	cout<<"Tiene "<<w<<" meses y \n";
	cout<<"Tiene "<<e<<" dias \n";
}
int main(){
	
	int fecha,mes,dia,mifecha,mimes,midia;
	cout<<"Ingrese la fecha actual(anio,mes,dia) EN NUMEROS: ";cin>>fecha>>mes>>dia;
	cout<<"Ingrese su fecha de nacimiento (anio,mes,dia) EN NUMEROS: ";cin>>mifecha>>mimes>>midia;
	calcule_su_edad(fecha,mes,dia,mifecha,mimes,midia);
	return 0;
}*/
//EJERCICIO 4
/* Hacer un programa que desarrolle una función, que genere en pantalla el listado de
números primos ubicados entre 1 hasta un numero x (x es ingresado por teclado).*/
/*
void listado_de_numeros_primos(int n){
	int cont=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			if(i%j==0){
				cont++;
			}
		}
		if(cont<=2){
			cout<<"Numero: \n "<<i<<"\n";
		}
		cont=0;
	}
}
int main(){
	int num;
	cout<<"Ingrese el limite ";cin>>num;
	listado_de_numeros_primos(num);
	return 0;
}*/
//EJERCICIO 5
/*Desarrollar un programa, utilizando funciones con un tipo de retorno, con las
siguientes opciones:
a. Introducir un valor x entero comprendido entre 0 y 100.
b. Validar que sea un valor par.
c. Sumar todos los números impares desde el 0 hasta el valor de x.*//*
void valor_par(int num){
	if(num%2==0){
		cout<<"Es par ";
	}else{
		cout<<"No es par ";
	}
}
int sumar_impares(int b){
	int s=0;
	for(int i=0;i<=b;i++){
		if(i%2!=0){
			s=s+i;
		}
	}
	return s;
}

int main(){
	int a;
	cout<<"Ingrese un numero: ";cin>>a;

	while(a>100 || a<0){
	 cout<<"Ingrese un valor valido: ";cin>>a;
	}
	valor_par(a);
	cout<<"La suma de impares es: "<<sumar_impares(a);
	return 0;
}*/



