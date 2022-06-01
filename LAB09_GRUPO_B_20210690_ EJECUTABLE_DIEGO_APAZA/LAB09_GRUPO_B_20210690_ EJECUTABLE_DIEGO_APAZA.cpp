#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;


//EJERCICIO 1;
/*
template <class P>
//si pongo P en vez de void me sale una advertencia de que 
//necesita retornar algo
void valor_min_max(P n1,P n2,P n3) {
	P menor;
	P mayor;
	if(n1 == n2 || n1 == n3 || n2 == n3){
		cout<<"Son numeros identicos\n";
	}
	else{
		if(n1>n2 && n2>n3){mayor = n1; menor = n3;}
		if(n1>n3 && n3>n2){mayor = n1; menor = n2;}
		if(n2>n3 && n3>n1){mayor = n2; menor = n1;}
		if(n2>n1 && n1>n3){mayor = n2; menor = n3;}
		if(n3>n2 && n2>n1){mayor = n3; menor = n1;}
		if(n3>n1 && n1>n2){mayor = n3; menor = n2;}
	}
	cout<<"El mayor es: "<<mayor<<" y el menor es: "<<menor<<endl;
}

int main(){
	int a=5;int b=6;int c=2;
	float A=1.2;float B=6.5;float C=9.31;
	valor_min_max(a,b,c);
	valor_min_max(A,B,C);
	return 0;
}*/

//EJERCICIO 2
/*
template <class o>
void operaciones_basicas(o num,o num2){
	cout<<"Suma: "<<num+num2<<endl;
	cout<<"Resta: "<<num-num2<<endl;
	cout<<"Multiplicacion: "<<num*num2<<endl;
	if(num2==0){
		cout<<"No se puede dividir entre 0 \n";
	}else{cout<<"division: "<<num/num2<<endl;}
}
int main(){
	int a=10;int b=8;
	float A=24.2;float B=6.1;
	operaciones_basicas(a,b);
	cout<<endl;
	operaciones_basicas(A,B);
}*/


//EJERCICIO 3
/*
template <class T>
class char_string{	
	private:
		T x;
	public:
		char_string(T);
		T getX() {return x;};
};
		
template <class T>
char_string<T>::char_string(T x) {
	this->x = x;
}
int main(){
	char_string<string> palabra("Apaza");
	char_string<char> letra('A');
	cout<<letra.getX()<<palabra.getX()<<"@unsa.edu.pe \n";
	/////
	char_string<string> palabra1("Mauricio");
	char_string<char> letra1('M');
	cout<<letra1.getX()<<palabra1.getX()<<"@unsa.edu.pe \n";
	////
	char_string<string> palabra2("Caceres");
	char_string<char> letra2('C');
	cout<<letra2.getX()<<palabra2.getX()<<"@unsa.edu.pe \n";
	///
	char_string<string> palabra3("Vilca");
	char_string<char> letra3('V');
	cout<<letra3.getX()<<palabra3.getX()<<"@unsa.edu.pe \n";
	///	
	char_string<string> palabra4("Gutierres");
	char_string<char> letra4('G');
	cout<<letra4.getX()<<palabra4.getX()<<"@unsa.edu.pe \n";
	return 0;
}*/

template<class A>
A retornar_Mayor(A num[]){
	A val=num[0];
	for(int i=0;i<5;i++){
		if(num[i]>val){
			val=num[i];
		}
	}
	return val;
}
template<class B>
B retornar_Menor(B num[]){
	B val=num[0];

	for(int i=0;i<5;i++){
		if(num[i]<val){
			val=num[i];
		}
	}
	return val;
}


int main(){
	int ArrayEntero[5] = {10,7,2,8,6};
	cout<<"El mayor valor del arreglo es: "<<retornar_Mayor(ArrayEntero)<<endl;
	cout<<"El menor valor del arreglo es: "<<retornar_Menor(ArrayEntero)<<endl;
	float ArrayFloat [5] = {12.1, 8.7, 5.6, 8.4, 1.2};
	cout<<"El mayor valor del arreglo es: "<<retornar_Mayor(ArrayFloat)<<endl;
	cout<<"El menor valor del arreglo es: "<<retornar_Menor(ArrayFloat)<<endl;
	return 0;
}

