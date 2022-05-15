#include "iostream"
#include "string"
#include "cmath"
#include "conio.h"
#include "ctime"
using namespace std;
class matriz{
    private:
        int matris[3][3]{0};
        int num1[9]={1,2,3,4,5,6,7,8,9};
    public:
        matriz(); 
        ~matriz();
        void mostrar();
		void aniadir();
		void mezclar();
		void ubicacion(int);
};
matriz::matriz(){
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			matris[i][j]= 0;
		}
	}
}
matriz::~matriz(){}
void matriz::mostrar(){
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<matris[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"\n";
}

void matriz::aniadir(){
	int aux=0;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			matris[i][j]=num1[aux];
			aux++;
		}
	}
	aux=0;
	mostrar();
}
void matriz::mezclar(){
	int temp=0;
	int ran=0;
	for(int i=0;i<9;i++){
		ran=rand()%9;
		temp=num1[i];
		num1[i]=num1[ran];
		num1[ran]=temp;
	}
}
void matriz::ubicacion(int a){
	int ub,ub1;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(a==matris[i][j]){
				ub=i;ub1=j;
				cout<<"\nUbicacion de "<<a<<" es "<<ub+1<<","<<ub1+1;
			}
		}
	}
}