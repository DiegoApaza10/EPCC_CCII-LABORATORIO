#include <iostream>
#include <string>

using namespace std;
class Gallina:public Ave{
	public:
		Gallina(string,string ,bool);
		void mostrar4();
		~Gallina();
};

Gallina::Gallina(string c1,string c2,bool c3):Ave(c1,c2,c3){}
void Gallina::mostrar4(){
	mostrar1();
}
Gallina::~Gallina(){
}