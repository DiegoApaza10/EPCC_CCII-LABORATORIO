
#include "rectangulo.h"
#include "alumno.h"
#include "persona.h"
#include "arreglo.h"
#include "matriz.h"
#include "iostream"
#include "string"
#include "cmath"
#include <ctime>
using namespace std;


int main()
{
    //EJERCICIO1
    /*
    rectangulo a = rectangulo(30,50);
    a.area();
    a.perimetro();
   */
    //EJERCICIO2
    /*
    alumno b= alumno(20210690,"Diego Francisco Apaza Andaluz",15,16,18);
    b.promedio();
    b.mostrar();*/
  	//EJERCICIO3
  	/*
  	int edad;
    cout<<"Ingrese en que anio nacio ";cin>>edad;
    persona a(edad);
    cout<<"tu edad es: "<<a.edad();*/
    //EJERCICIO4
    /*
    arreglo a=arreglo(4);
    a.mostrar();
    a.anadir(6);
    a.anadir(4);
    int num;
    cout<<"Ingrese el numero que desea eliminar \n";cin>>num;
    a.extraer(num);*/
    //EJERCICIO 5
    
    int num;
    
    matriz a=matriz();
	srand(time(NULL));
    a.mezclar();
    a.aniadir();
    cout<<"\n Elija un numero para saber su ubicacion ";cin>>num;
    a.ubicacion(num);
    return 0;
}

