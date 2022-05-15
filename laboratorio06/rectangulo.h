#include "iostream"
#include "string"
#include "cmath"

using namespace std;

class rectangulo
{
    private:
        float base;
        float altura;
    public:
        rectangulo(float,float); 
        ~rectangulo(); 
        void perimetro();
        void area();
};

rectangulo::rectangulo(float _base,float _altura){
    base =_base;
    altura=_altura;
}
rectangulo::~rectangulo(){}

void rectangulo::perimetro() {
    float a;
    a=base*altura;
    cout << "El area es: " << a <<endl;
}
void rectangulo::area(){
    float a;
    a=2*(base+altura);
    cout << "El perimetro es: " << a <<endl;
}




