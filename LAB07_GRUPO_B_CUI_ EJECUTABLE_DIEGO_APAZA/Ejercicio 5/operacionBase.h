#include <iostream>
#include <string>
using namespace std;
class operacionBase{
	private:
		int num;
	public:
		void setOperador(int);
		int getOperator();
		
};
void operacionBase::setOperador(int _num){
	num=_num;
}
int operacionBase::getOperator(){
	return num;
}