/*Implementar un programa que maneje un arreglo de estructuras que calcule la
nota final del Ciencia de la Computacion. El programa debe permitir el ingreso
de cualquier cantidad de alumnos y para cada alumno, se podra ingresar nombre,
grupo, nota de la primera fase, segunda fase, tercera fase y proyecto final. El
porcentaje de cada item es 15%, 20%, 25% y 40% respectivamente.*/
#include<iostream>
#include<string>
using namespace std;
struct estudiante{
	string nom;
	char g;
	int pf;
	int sf;
	int tf;
	int Pf;
};
void promedio(estudiante aux){
	int prom;
	prom=aux.pf*0.15+aux.sf*0.2+aux.tf*0.25+aux.Pf*0.4;
	cout<<"Promedio del estudiante: "<<aux.nom<<" del grupo "<<aux.g<<": "<<prom<<endl<<endl;
}

int main(){
	int n;
	cout<<"Ingrese cantidad de estudiantes: ";cin>>n;
	estudiante lista[n];
	for(int i=0;i<n;i++){
		cout<<"Ingrese nombre del estudiante: ";cin>>lista[i].nom;
		cout<<"Ingrese el grupo del curso: ";cin>>lista[i].g;
		cout<<"Nota primera fase: ";cin>>lista[i].pf;
		cout<<"Nota segunda fase: ";cin>>lista[i].sf;
		cout<<"Nota tercera fase: ";cin>>lista[i].tf;
		cout<<"Nota proyecto final: ";cin>>lista[i].Pf;
		promedio(lista[i]);
	}
	
	return 0;
}

