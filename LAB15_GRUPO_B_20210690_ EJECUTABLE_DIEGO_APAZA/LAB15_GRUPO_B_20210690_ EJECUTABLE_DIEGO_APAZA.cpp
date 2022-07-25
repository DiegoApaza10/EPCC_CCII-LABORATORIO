#include "iostream"
#include "vector"
#include "string"

using namespace std;
vector<string> colores={"Rojo","Azul","Verde","Amarillo","Celeste"};
vector<string> material={"Acero inoxidable","Madera","Plastico","Fibra de carbono","Cristal reforzado"};


int eleccion(){
	int op=0;
	cout<<"\nElija una opcion\n";
	cin>>op;
	return op;
}
void mostrar_colores(){
	for(auto i:colores){
		cout<<i<<" || ";
	}
	cout<<"\n";
}

void mostrar_material(){
	for(auto i:material){
		cout<<i<<" || ";
	}
		cout<<"\n";
}

struct componente{
	private:
		string tipo=" ";
		string color=" ";
		string material=" ";
	public:
		void set_tipo(string tipo){	this->tipo=tipo;}
		void set_color(string color){this->color=color;}
		void set_material(string material){this->material=material;}
		void mostrar(){
			cout<<tipo<<" de color "<<color<<" hecho de "<<material<<"\n";
		}
		
};

class Producto1 {
	public:
	vector<componente> componentes;
	void ListaComp()const {
		cout << "Componentes : \n";
		//for (size_t i = 0; i < componentes.size(); i++) {
		for(componente i:componentes){
			i.mostrar();
		}
		std::cout << "\n\n";
	}
};

class IBuilder {
	public:
	virtual ~IBuilder() {}
	virtual void Producir_ventana() const = 0;
	virtual void Producir_puertas() const = 0;
	virtual void Producir_asiento() const = 0;
};

class Constructor_Especifico:public IBuilder{
	private:

		Producto1* producto;
		componente* comp=new componente;
	public:
		Constructor_Especifico(){
			this->Reset();
		}
		~Constructor_Especifico(){
			delete producto;
		}
		
		void Reset(){
			this->producto=new Producto1;	
		}
		void Producir_ventana()const override {
			cout<<"\nPERSONALIZACION DE VENTANAS \n";
			this->comp->set_tipo("Ventanas");
			cout<<"Elija el material: (Entre el 1 al 5)  \n ";
			mostrar_material();
			this->comp->set_material(material[eleccion()-1]);
			cout<<"Elija el color: (Entre el 1 al 5) \n";
			mostrar_colores();
			this->comp->set_color(colores[eleccion()-1]);
			this->producto->componentes.push_back(*comp);
		}
		void Producir_puertas()const override {
			cout<<"\nPERSONALIZACION DE PUERTAS \n";
			this->comp->set_tipo("Puertas");
			cout<<"Elija el material: (Entre el 1 al 5)  \n ";
			mostrar_material();
			this->comp->set_material(material[eleccion()-1]);
			cout<<"Elija el color: (Entre el 1 al 5) \n";
			mostrar_colores();
			this->comp->set_color(colores[eleccion()-1]);
			
			this->producto->componentes.push_back(*comp);
		}
		void Producir_asiento()const override {
			cout<<"\nPERSONALIZACION DE ASIENTOS \n";
			this->comp->set_tipo("Asiento");
			cout<<"Elija el material: (Entre el 1 al 5)  \n ";
			mostrar_material();
			this->comp->set_material(material[eleccion()-1]);
			cout<<"Elija el color: (Entre el 1 al 5) \n";
			mostrar_colores();
			this->comp->set_color(colores[eleccion()-1]);
			this->producto->componentes.push_back(*comp);
		}
		
		Producto1* GetProducto(){
			Producto1* resultado=this->producto;
			this->Reset();
			return resultado;
		}
};


class Director{
	private:
		IBuilder* builder;
	public:
		void set_builder(IBuilder* builder){
			this->builder=builder;
		}	
		void ProductoCompleto(){
			this->builder->Producir_asiento();
			this->builder->Producir_ventana();
			this->builder->Producir_puertas();
		}
};


void Cliente(Director& director,int opc){
	int a;
	Constructor_Especifico* constructor=new Constructor_Especifico();
	director.set_builder(constructor);
	Producto1* p;
	
	if(opc==2){
		cout<<"Producto Completo : \n";
		director.ProductoCompleto();
		p=constructor->GetProducto();
		p->ListaComp();
		delete p; 
	}else if(opc==1){
		cout<<"Producto Perzonalizado : \n";
		cout<<"Desea agregar Puertas? : \n";
		cout<<"Si---opcion 1 : \n";
		cout<<"NO---opcion 2 : \n";
		cin>>a;
		if(a==1){
			constructor->Producir_puertas();
		}else{"No deseo agregar puertas perzonalizadas";};
		cout<<"Desea agregar Asientos? : \n";
		cout<<"Si---opcion 1 : \n";
		cout<<"NO---opcion 2 : \n";
		cin>>a;
		if(a==1){
			constructor->Producir_asiento();
		}else{"No deseo agregar Asientos perzonalizados";};
		cout<<"Desea agregar Asientos? : \n";
		cout<<"Si---opcion 1 : \n";
		cout<<"NO---opcion 2 : \n";
		cin>>a;
		if(a==1){
			constructor->Producir_ventana();
		}else{"No deseo agregar Ventana perzonalizados";};
		p=constructor->GetProducto();
		p->ListaComp();
		delete p;
	}

	

}


int main(){
	int opcion=0;
	cout<<"Personalizado ----- opcion 1 \n";
	cout<<"Completo ---------- opcion 2 \n";
	cout<<"Ingrese una opcion \n";
	cin>>opcion;
	Director* director= new Director();
	Cliente(*director,opcion);
	delete director;
	return 0;
}
















