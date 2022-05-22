#include <iostream>
#include <string>

using namespace std;
class Ganso:public Ave{
	public:
		Ganso(string,string ,bool);
		void mostrar2();
		~Ganso();	
};
Ganso::Ganso(string v1,string v2,bool v3):Ave(v1,v2,v3){
}
void Ganso::mostrar2(){
	mostrar1();
}
Ganso::~Ganso(){}