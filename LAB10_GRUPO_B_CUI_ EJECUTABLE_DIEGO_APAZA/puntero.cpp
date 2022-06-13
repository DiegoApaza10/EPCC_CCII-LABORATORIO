#include <iostream>
#include "lista.h"

using namespace std;
 
int main()
{
    List<int> lista_1;
    int ele;//elemento
    int dim;//tamanio de lista
    int pos;//posicion
 
    cout << "Ingresa la dimension de la lista: " << endl;
    cin >> dim;
    cout << "Agrega un elemento por la cabeza: " << endl;
    cin >> ele;
    lista_1.anadirfinal(ele);
    cin >> ele;
    lista_1.anadirfinal(ele);
    cin >> ele;
    lista_1.anadirfinal(ele);
    lista_1.mostrar();

    cout << "Lista ordenada: " << endl;
    lista_1.arreglar();
    lista_1.mostrar();
 	cout << "Lista de forma descendente: " << endl;
    lista_1.invertir();
    lista_1.mostrar();
 
    cout << "Elimina un elemento por posicion: " << endl;
    cin >> pos;
    lista_1.eliminar(pos);
    lista_1.mostrar();
 
  
 
    return 0;
}