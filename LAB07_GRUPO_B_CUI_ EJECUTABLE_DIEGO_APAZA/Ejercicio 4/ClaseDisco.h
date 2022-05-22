#include "ClaseMultimedia.h"
#include <iostream>
#include <string>
using namespace std;
class ClaseDisco : public ClaseMultimedia{
	private:
		int almacenamiento;
	public :
		ClaseDisco(string,float,int);
		void mostrar();
		~ClaseDisco();
};
ClaseDisco::ClaseDisco(string v1,float v2,int v3):ClaseMultimedia(v2,v1){
	almacenamiento=v3;
}
void ClaseDisco::mostrar(){
	mostrar1();
	cout<<"Almacenamiento: "<<almacenamiento<<"GB"<<endl;
}
ClaseDisco::~ClaseDisco(){}