#include <iostream>
#include <string>
using namespace std;

template<typename T>
struct nodo{
	T dato;
	nodo *der;
	nodo *izq;
};

template<typename T>
nodo<T>* crearnodo(T n){
	nodo<T>*n_nodo=new nodo<T>();
	n_nodo->dato = n;
	n_nodo->der =NULL;
	n_nodo->izq =NULL;
	return n_nodo;
}


template<typename T>
void insertar(nodo<T> *&arbol,T n){
	if(arbol == NULL){
		nodo<T> * n_nodo=crearnodo(n);
		arbol=n_nodo;
	}else{
		T valorRaiz = arbol->dato;
		if(n<valorRaiz){//menor a la raiz
			insertar(arbol->izq,n);
		}else{
			insertar(arbol->der,n);
		}	
	}
}
template<typename T>
void mostrar(nodo<T> *arbol,int cont){
	if(arbol == NULL){
		return;
	}else{
		mostrar(arbol->der,cont+1);
		for(int i=0;i<cont;i++){
			cout<<"   ";
		}
		cout<<arbol->dato<<endl;
		mostrar(arbol->izq,cont+1);
	}
}

nodo<int>*arbol=NULL;
int cont=0;

nodo<string>*arbol1=NULL;

int main(){
	
	
	insertar<int>(arbol,1);
	insertar<int>(arbol,10);
	insertar<int>(arbol,3);
	insertar<int>(arbol,4);
	
	insertar<string>(arbol1,"primero");
	insertar<string>(arbol1,"segundo");
	insertar<string>(arbol1,"tercero");
	
	mostrar(arbol,cont);
	
	cout<<"\n //////////////////////////////////////// \n";
	mostrar(arbol1,cont);
	
	return 0;
}