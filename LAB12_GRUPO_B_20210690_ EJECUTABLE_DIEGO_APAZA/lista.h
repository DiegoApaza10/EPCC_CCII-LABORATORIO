//LISTA
#include <iostream>
#include <string>
#include <stdlib.h>
#include "nodo.h"
using namespace std;

template <class T>
class Lista{
	private:
		Nodo<T> *frente;
		Nodo<T> *fin;
	public:
		Lista();
		~Lista();
		void eliminar();
		void anadir(T);
		void mostrar();
		void buscar(T);
	
};

template<typename T>
Lista<T>::Lista()
{
	frente = NULL;
	fin=NULL;
}

template<typename T>
void Lista<T>::anadir(T dato_){
	Nodo<T> *nuevo_nodo=new Nodo<T>(dato_);
	if(frente==NULL){
		frente=nuevo_nodo;
	}else{
		fin->sgte=nuevo_nodo;
	}
	fin=nuevo_nodo;
}
template<typename T>
void Lista<T>::eliminar()
{	
    Nodo<T> *aux= frente;
    if(frente==fin){
    	frente=NULL;
    	fin=NULL;
	}else{
		frente=frente->sgte;
	}
    delete aux;
}

// Imprimir la Lista
template<typename T>

void Lista<T>::mostrar(){
	Nodo<T> *temp = frente;
	if (!frente) {
		cout << "La Lista está vacia " << endl;	
	} else {
		while (temp!=NULL) {
			temp->print();
			if (!temp->sgte){cout << "NULL";}
			temp = temp->sgte;
			
		}
	}
	cout<<"\n";
}
//Buscar un elemento
template<typename T>
void Lista<T>::buscar(T dato_)
{
    Nodo<T> *aux = frente;
    int cont = 1;
    int cont2 = 0;
 
    while (aux) {
        if (aux->dato == dato_) {
        	
            cout << "El dato se encuentra en la posicion: " << cont << endl;
            cont2++;
        }
        aux=aux->sgte;
        cont++;
    }
    if (cont2 == 0) {
        cout << "No existe el dato " << endl;
    }
    cout << endl<< endl;
}
template<typename T>
Lista<T>::~Lista() {}