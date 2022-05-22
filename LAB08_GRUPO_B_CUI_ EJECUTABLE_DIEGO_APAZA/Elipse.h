#include <iostream>
#include <string>

using namespace std;
class Elipse:public Forma{
	private:
		float r,R;
	public:
		Elipse(string,string,int,int,float,float);
		float area();
		virtual void imprimir();
		~Elipse();
};
Elipse::Elipse(string n1,string n2,int n3,int n4,float n5,float n6):Forma(n1,n2,n3,n4){
	R=n5;
	r=n6;
}
float Elipse::area(){
	return 3.14*R*r;
}
void Elipse::imprimir(){
	Forma::imprimir();
	cout<<"Radio mayor: "<<R<<endl;
	cout<<"radio menor: "<<r<<endl;
}
Elipse::~Elipse(){}