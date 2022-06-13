
#include <iostream>
using namespace std;
 
template <class T>
 
class Node
{
    public:
        Node(T);
        ~Node();
 
        Node *next;
        T data;
        void print();
};

// Constructor por parametro
template<typename T>
Node<T>::Node(T data_)
{
    data = data_;
    next = NULL;
}
 
 
// Imprimir un Nodo
template<typename T>
void Node<T>::print()
{
    //cout << "Node-> " << "Dato: " << dato << " Direcion: " << this << " Siguiente: " << next << endl;
    cout << data << "-> ";
}
 
template<typename T>
Node<T>::~Node() {}