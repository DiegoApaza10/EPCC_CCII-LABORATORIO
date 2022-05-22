#include <string>
#include <iostream>
#include "material.h"
#include "color.h"
using namespace std;
class objeto:public color,public material{
	public:
		objeto(int,int,int,string);
		~objeto();
		void mostrar();
};
objeto::objeto(int v1,int v2,int v3,string v4):color(v1,v2,v3),material(v4){}
objeto::~objeto(){};

void objeto::mostrar(){
	cout<<"El objeto es de color rgb(";
	mostrar2();
	cout<<")"<<" y de material ";
	mostrar1();
}