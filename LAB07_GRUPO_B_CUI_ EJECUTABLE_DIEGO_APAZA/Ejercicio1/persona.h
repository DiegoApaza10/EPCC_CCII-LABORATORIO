#include <iostream>
#include <string>
using namespace std;
class persona{
    protected:
        int edad;
        string nombre;
    public:
        persona(int, string);
        ~persona();
};
persona::persona(int _edad,string _nombre){
    edad=_edad;
    nombre=_nombre;
}

persona::~persona(){}
