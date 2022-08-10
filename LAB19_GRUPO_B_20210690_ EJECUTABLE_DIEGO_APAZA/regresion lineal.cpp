#include <map>
#include <iostream>
#include <vector>
using namespace std;
class Lineal{
	private:
		vector<pair<double,double>> XY;
		double sumx=0;
		double sumy=0;
		double sumxx=0;
		double sumxy=0;
		double sumx2=0;
		double m,b,c,f;

	public:
		double operator()(vector<pair<double,double>> Vector){
			for(auto a:Vector){
				sumx=sumx+a.first;
				sumy=sumy+a.second;
				sumxx+=a.first*a.second;
				sumxy+=a.first*a.second;
			} 
			sumx2=sumx*sumx;
			cout<<sumx<<endl;
			cout<<sumy<<endl;
			cout<<sumxx<<endl;
			cout<<sumxy<<endl;
			cout<<sumx2<<endl;
			m=(10*sumxy-sumx*sumy)/(10*sumxx-sumx2);
			b=(sumy-m*sumx)/10;
			cout<<"la pendiente es:"<<m<<endl;
			cout<<"la interseccion es:"<<b<<endl;
			cout<<"ingrese el dato del cual desee aproximar:"<<endl;
			cin>>c;
			//y=a+bc
			f=m*c+b;
			return f;
		}
	
};
int main(){
	vector<pair<double,double>> xy={{12,5},{13,6},{5,8},{7,9}};
	Lineal objeto;
	cout<<"el y aproximado es:"<<objeto(xy)<<endl;
	system("PAUSE");
	return 0;
}