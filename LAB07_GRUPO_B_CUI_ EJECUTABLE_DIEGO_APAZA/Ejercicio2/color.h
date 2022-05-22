#include <string>
#include <iostream>
using namespace std;
class color{
	private:
		int R,G,B;
	public:
		color(int,int,int);
		~color();
		void mostrar2();
};
color::color(int r,int g,int b){
	R=r;
	G=g;
	B=b;
}
color::~color(){}
void color::mostrar2(){
	cout<<R<<" "<<G<<" "<<B<<" ";
}