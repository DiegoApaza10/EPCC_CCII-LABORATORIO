#include <iostream>
#include <string>
using namespace std;
class Ave{
	private:
		string tipo;
		string patas;
		bool volar;
	public:
		Ave(string,string,bool);
		void mostrar1();
		~Ave();
};
Ave::Ave(string a,string b,bool c){
	tipo=a;
	patas=b;
	volar=c;
}
void Ave::mostrar1(){
	cout<<"Tipo "<<tipo<<endl;
	cout<<"Tipo de patas "<<patas<<endl;
	if(volar==true){
		cout<<"Puede volar \n";
	}else{cout<<"No Puede volar \n";
	}
	cout<<"\n";
}
Ave::~Ave(){}