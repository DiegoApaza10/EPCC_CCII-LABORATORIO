#include <string>
#include <iostream>
using namespace std;
class material{
	private:
		string mat;
	public:
		material(string);
		~material();
		void mostrar1();
};
material::material(string a){
	mat=a;
}
material::~material(){}
void material::mostrar1(){
	cout<<mat;
}