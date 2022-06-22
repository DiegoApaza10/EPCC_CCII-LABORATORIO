/*Implementar un programa que maneje un arreglo de estructuras que calcule la
nota final del Ciencia de la Computacion. El programa debe permitir el ingreso
de cualquier cantidad de alumnos y para cada alumno, se podra ingresar nombre,
grupo, nota de la primera fase, segunda fase, tercera fase y proyecto final. El
porcentaje de cada item es 15%, 20%, 25% y 40% respectivamente.*/
#include<iostream>
#include<string>
#include<vector>
using namespace std;
struct estudiante{
	string nom;
	char g;
	int pf;
	int sf;
	int tf;
	int Pf;
};
void promedio(vector<estudiante> aux){
	int prom;
	for(int i=0;i<aux.size();i++){
		prom=aux[i].pf*0.15+aux[i].sf*0.2+aux[i].tf*0.25+aux[i].Pf*0.4;
		cout<<"Promedio del estudiante: "<<aux[i].nom<<" del grupo "<<aux[i].g<<": "<<prom<<endl<<endl;
	}
}
void ingresar(vector<estudiante>& lista){
	string nom1;
	char a;
	int b;
	int c;
	int d;
	int e;
	cout<<"Ingrese nombre del estudiante: ";cin>>nom1;
	cout<<"Ingrese el grupo del curso: ";cin>>a;
	cout<<"Nota primera fase: ";cin>>b;
	cout<<"Nota segunda fase: ";cin>>c;
	cout<<"Nota tercera fase: ";cin>>d;
	cout<<"Nota proyecto final: ";cin>>e;
	estudiante aux={nom1,a,b,c,d,e};
	lista.push_back(aux);
}                     
	

int main(){
	vector<estudiante>lista1;
	char a;
	while(a!='n' && a!='N'){
		ingresar(lista1);
		cout<<"Desea ingresar otro estudiante (Y/N)";
		cin>>a;
	}
	promedio(lista1);

	
	return 0;
}

