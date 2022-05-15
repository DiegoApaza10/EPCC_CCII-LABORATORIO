#include "iostream"
#include "string"
#include "cmath"

using namespace std;

class alumno
{
    private:
        int cui;
        string nombre;
        float nota1,nota2,nota3,prom;
    public:
        alumno(int,string,float,float,float); 
        ~alumno(); 
        void mostrar();
        void promedio();
};

alumno::alumno(int _cui,string _nombre,float _nota1,float _nota2,float _nota3){
    cui=_cui;
    nombre=_nombre;
    nota1=_nota1;
    nota2=_nota2;
    nota3=_nota3;
   
}
alumno::~alumno(){}

void alumno::mostrar() {
    cout << "Alumno: " << nombre <<endl;
    cout << "CUI: " << cui <<endl;
    cout << "nota1: " << nota1 <<endl;
    cout << "nota2: " << nota2 <<endl;
    cout << "nota3: " << nota3 <<endl;
    cout << "Promedio "<< prom<<endl;
    if(prom<=10.4){cout<<"ALUMNO DESAPROBADO"<<endl;}
    else{ cout<<"ALUMNO APROBADO"<<endl;}
}
void alumno::promedio(){
    prom=(nota1+nota2+nota3)/3;
  
  
}

