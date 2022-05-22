#include <iostream>
#include <string>
using namespace std;
class operacionFactorial:public operacionBase{
	private:
		int res;
	public:
		int devolverFactorial();
};
int operacionFactorial::devolverFactorial(){
	res=getOperator();
	int aux=1;
	for(int i=1;i<=res;i++){
		aux=aux*i;
	}
	return aux;
	//return res;
}
