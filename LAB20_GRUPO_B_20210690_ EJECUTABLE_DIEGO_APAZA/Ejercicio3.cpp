/*
#include <iostream>
#include <memory>
using namespace std;
 
class C1
{
	private:
		shared_ptr<double> d;
	public:
		C1(shared_ptr<double> value) : d(value) {}
		virtual ~C1() { cout << "\nC1 destructor\n"; }
		void print() const { cout << "Valor " << *d<<endl; }
};
class C2
{
	private:
		shared_ptr<double> d;
	public:
		C2(shared_ptr<double> value) : d(value) {}
		virtual ~C2() { cout << "\nC2 destructor\n"; }
		void print() const { cout << "Valor " << *d; }
};

int main(){
	
	shared_ptr<double> d =make_shared<double>(12.0);
	shared_ptr<C1> B = make_shared<C1>(d);
	shared_ptr<C2> A = make_shared<C2>(d);

	B->print();
	A->print();
	
	return 0;
}
*/
#include <iostream>
#include <memory>
using namespace std;
 
class C1
{
	private:
		shared_ptr<double> d;
	public:
		C1(shared_ptr<double> value) : d(value) {}
		virtual ~C1() { cout << "\nC1 destructor\n"; }
		void print() const { cout << "Valor " << *d<<endl; }
};
class C2
{
	private:
		shared_ptr<double> d;
	public:
		C2(shared_ptr<double> value) : d(value) {}
		virtual ~C2() { cout << "\nC2 destructor\n"; }
		void print() const { cout << "Valor " << *d; }
};

int main(){
	
	shared_ptr<double> d =make_shared<double>(12.0);
	shared_ptr<C1> B = make_shared<C1>(d);
	shared_ptr<C2> A = make_shared<C2>(d);

	B->print();
	A->print();
	
	return 0;
}