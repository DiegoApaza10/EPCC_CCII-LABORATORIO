#include <iostream>

using namespace std;
class WinFactory {
	public:
		virtual ~WinFactory() {};
		virtual string Draw() const = 0;
};
///////////////
class WinCheckBox: public WinFactory{
	public:
		string Draw() const override {
			return "Dibujando WinCheckBox.";
		}
};
class WinButton : public WinFactory{
	public:
		string Draw() const override {
			return "Dibujando Button Windows";
		}
};
/////////////////
class MacFactory {
	public:
		virtual ~MacFactory() {};
		virtual string Draw() const = 0;
		virtual string draw(const WinFactory& colaborador) const = 0;
};
//////////////////////////////////
class MacCheckBox: public MacFactory{
	public:
		string Draw() const override {
			return "Dibujando MacCheckBox.";
		}
		string draw(const WinFactory& colaborador) const override {
			const string resultado = colaborador.Draw();
			return "MacFactory con ayuda de " + resultado;
		}
};
class MacButton : public MacFactory{
	public:
		string Draw() const override {
			return "Dibujando Button MAC";
		}
		string draw(const WinFactory& colaborador) const override {
			const string resultado = colaborador.Draw();
			return "MacButton con ayuda de " + resultado;
		}
};
///////////////////


//ABSTRACT FACTORY
class GUIFactory {
	public:
		virtual WinFactory* CrearControlW() const = 0;
		virtual MacFactory* CrearControlM() const = 0;
};

//PRODUCTO FINAL
class Button : public GUIFactory {
	public:
		WinFactory* CrearControlW() const override {
			return new WinButton();
		}
		MacFactory* CrearControlM() const override {
			return new MacButton();
		}
};

class CheckBox: public GUIFactory{
	public:
		WinFactory* CrearControlW() const override {
			return new WinCheckBox();
		}
		MacFactory* CrearControlM() const override {
			return new MacCheckBox();
		}
};

void Aplication(const GUIFactory& f,int i) {
	if(i==1){
		const WinFactory* Winproducto = f.CrearControlW();
		cout<<Winproducto->Draw();
		delete Winproducto;
	}
	if(i==2){
		const MacFactory* Macproducto = f.CrearControlM();
		cout<<Macproducto->Draw()<<endl;

		delete Macproducto;
	}
}

int main() {
	cout << "Cliente: Windows \n";
	Button* f1 = new Button();
	Aplication(*f1, 1); // 1 - Windows
	delete f1;
	cout << std::endl;
	cout << "Cliente: Mac \n";
	Button* f2 = new Button();
	Aplication(*f2, 2); // 2 - Mac
	delete f2;
	return 0;
}
