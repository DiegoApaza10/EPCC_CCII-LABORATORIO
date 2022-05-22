#include <iostream>
#include <string>
#include "Cuenta.h"
using namespace std;
class CuentaJoven:private Cuenta{	
	public:
		CuentaJoven(string,double,int);
		void imprimir();
		~CuentaJoven();
};

CuentaJoven::CuentaJoven(string a1,double a2,int a3):Cuenta(a1,a2,a3){}
void CuentaJoven::imprimir(){
	imprimir();
}
CuentaJoven::~CuentaJoven(){}