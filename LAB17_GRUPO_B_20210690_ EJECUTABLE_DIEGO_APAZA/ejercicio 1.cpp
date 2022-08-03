#include <iostream>
using namespace std;

/*
Desarrolle un programa simple de calculadora (operciones basicas) que utilice
clases utilizando plantillas
*/

template<typename T>
void suma(T a,T b){
	cout<<"Resultado: "<<a+b<<endl;
}
template<typename T>
void resta(T a,T b){
	cout<<"Resultado: "<<a-b<<endl;
}

template<typename T>
void multiplicacion(T a,T b){
	cout<<"Resultado: "<<a*b<<endl;
}

template<typename T>
void division(T a,T b){
	b!=0?cout<<"Resultado: "<<a/b<<endl:cout<<"No permitido "<<endl;
}



int main(){
	float a=45.5,b=52.3;
	int c=4,d=6;
	
	suma<float>(a,b);
	
	resta<float>(a,b);
	
	multiplicacion<float>(a,b);
	
	division<float>(a,b);
	
	suma<int>(c,d);
	
	resta<int>(c,d);
	
	multiplicacion<int>(c,d);
	
	division<int>(c,d);
	
	
	
	
	
	return 0;
}