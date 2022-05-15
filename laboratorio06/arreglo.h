#include "iostream"
#include "string"
#include "cmath"
using namespace std;
class arreglo{
    private:
        int lista[5]{};
        int cant,num;
    public:
        arreglo(int); 
        ~arreglo();
        void mostrar();
        void anadir(int lista); 
        void extraer(int num);
        
};
arreglo::arreglo(int cant){
	cant=cant;
	int num;
	for(int i=0;i<cant;i++){
		cout<<"Ingrese un valor ";cin>>num;
		lista[i]=num;
	}

}
arreglo::~arreglo(){}

void arreglo::mostrar(){
	for(int i=0;i<5;i++){
		cout<<lista[i]<<" ";
	}
	cout<<"\n";
}

void arreglo::anadir(int num){
	num=num;
	for(int i=0;i<5;i++){
		if(lista[i]!=0){
			cant++;
		}
	}
	cout<<"Aniadiendo "<<num<<endl;
	if(cant==5){
		cout<<"\nNO HAY ESPACIO \n";
	}
	else if(cant<5){
		lista[cant]=num;
	}
	mostrar();
	cant=0;
}

void arreglo::extraer(int num){
	num=num;
	int aux=0;
	cout<<num<<endl;
	for(int i=0;i<5;i++){
		if(lista[i]!=num){
			aux++;
		}
		if(lista[i]==num){
			lista[i]=0;
		}
	}
	if(aux=5){cout<<"\nNo existe el numero \n";}
	mostrar();
	cant=0;
	aux=0;
}




