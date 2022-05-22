#include <iostream>
#include "persona.h"
#include <string>
using namespace std;
class alumno:public persona{
    public:
        alumno(int, string);
        void mostrar();
        ~alumno();
};
alumno::alumno(int _a, string _b):persona(_a,_b){}
alumno::~alumno(){}
void alumno::mostrar(){
    std::cout << "Nombre: " <<nombre<< "\n";
    cout << "Edad: " <<edad<< "\n";
}
