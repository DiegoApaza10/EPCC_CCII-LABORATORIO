#include <iostream>
#include <string>

using namespace std;
class Rectangulo:public Forma{
	private:
		float ladomenor;
		float ladomayor;
	public:
		Rectangulo(string,string,int,int,float,float);
		virtual void imprimir();
		float area();
		int perimetro();
		void escala(float);
		~Rectangulo();
};
Rectangulo::Rectangulo(string v1,string v2,int v3,int v4,float L,float l):Forma(v1,v2,v3,v4){
	ladomenor=L;
	ladomayor=l;
}
void Rectangulo::imprimir(){
	Forma::imprimir();
	cout<<"Lado mayor: "<<ladomayor<<endl;
	cout<<"Lado menor: "<<ladomenor<<endl;
}
float Rectangulo::area(){
	return ladomenor*ladomayor;
}
int Rectangulo::perimetro(){
	return (2*ladomenor)+(2*ladomayor);
}
void Rectangulo::escala(float f){
	ladomenor=ladomenor*f;
	ladomayor=ladomayor*f;	
}
Rectangulo::~Rectangulo(){}