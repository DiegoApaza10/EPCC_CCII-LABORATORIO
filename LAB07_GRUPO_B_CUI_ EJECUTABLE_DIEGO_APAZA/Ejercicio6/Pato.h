#include <iostream>
#include <string>

using namespace std;
class Pato:public Ave{
	public:
		Pato(string,string ,bool);
		void mostrar3();
		~Pato();		
};
Pato::Pato(string b1,string b2,bool b3):Ave(b1,b2,b3){}
void Pato::mostrar3(){
	mostrar1();
}
Pato::~Pato(){}
