#include <fstream>
#include <iostream>
#include <string>
#include <stdlib.h>
#include "nodo.h"
#include <random>
#include <ctime>
using namespace std;
 
template <class T>
 
class List
{
    public:
        List();
        ~List();
        void anadirfinal(T);
        void eliminar(int);
        void llenar(int);
        void invertir();
        void mostrar();
        void arreglar();
    private:
        Node<T> *m_head;
        int m_num_nodes;
};

// Constructor por defecto
template<typename T>
List<T>::List()
{
    m_num_nodes = 0;
    m_head = NULL;
}
 

// Insertar al final
template<typename T>
void List<T>::anadirfinal(T data_)
{
    Node<T> *new_node = new Node<T> (data_);
    Node<T> *temp = m_head;
 
    if (!m_head) {
        m_head = new_node;
    } else {
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
    }
    m_num_nodes++;
}
 


 
// Eliminar por posicion del nodo
template<typename T>
void List<T>::eliminar(int pos)
{
    Node<T> *temp = m_head;
    Node<T> *temp1 = temp->next;
 
    if (pos < 1 || pos > m_num_nodes) {
        cout << "Fuera de rango " << endl;
    } else if (pos == 1) {
        m_head = temp->next;
    } else {
        for (int i = 2; i <= pos; i++) {
            if (i == pos) {
                Node<T> *aux_node = temp1;
                temp->next = temp1->next;
                delete aux_node;
                m_num_nodes--;
            }
            temp = temp->next;
            temp1 = temp1->next;
        }
    }
}
 
// Llenar la Lista por teclado
template<typename T>
void List<T>::llenar(int dim)
{
    T ele;
    for (int i = 0; i < dim; i++) {
        cout << "Ingresa el elemento " << i + 1 << endl;
        cin >> ele;
        add_end(ele);
    }
}
 
 

// Invertir la lista
template<typename T>
void List<T>::invertir()
{
    Node<T> *prev = NULL;
    Node<T> *next = NULL;
    Node<T> *temp = m_head;
 
    while (temp) {
        next = temp->next;
        temp->next = prev;
        prev = temp;
        temp = next;
    }
    m_head = prev;
}

 
// Imprimir la Lista
template<typename T>
void List<T>::mostrar()
{
    Node<T> *temp = m_head;
    if (!m_head) {
        cout << "La Lista esta vacia " << endl;
    } else {
        while (temp) {
            temp->print();
            if (!temp->next) cout << "NULL";
                temp = temp->next;
        }
  }
  cout << endl << endl;
}
 

// Ordenar de manera ascendente
template<typename T>
void List<T>::arreglar()
{
    T temp_data;
    Node<T> *aux_node = m_head;
    Node<T> *temp = aux_node;
 
    while (aux_node) {
        temp = aux_node;
 
        while (temp->next) {
            temp = temp->next;
 
            if (aux_node->data > temp->data) {
                temp_data = aux_node->data;
                aux_node->data = temp->data;
                temp->data = temp_data;
            }
        }
 
        aux_node = aux_node->next;
    }
}
 
template<typename T>
List<T>::~List() {}