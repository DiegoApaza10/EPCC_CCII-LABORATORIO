#include <iostream>
#include <memory>
 using namespace std;
 
 class Point{
	private:
 		double x;
		double y;
	public:	
		Point(double x,double y){
			this->x=x;
			this->y=y;		
		}
		void X(double a){
			x=a;
			cout<<x<<endl;
		}
		void Y(double a){
			y=a;
			cout<<y<<endl;
		}	
		void print(){
			cout << "(" << x << ", " << y << ")\n";
		}
		~Point(){}
 };
 
 int main(){
	//EJERCICIO 1
	/*
	Point* pt = new Point(1.0, 2.0);
	*d = 2.0;
	(*pt).X(3.0);
	(*pt).Y(3.0);
	pt->X(3.0);
	pt->Y(3.0);
	delete d;
	delete pt;
	*/
	//EJERCICIO 2
	/*
	unique_ptr<double> d = make_unique<double>(1.0);
	unique_ptr<Point> pt = make_unique<Point>(1.0,2.0);

	*d=2.0;
	pt->X(3.0);
	pt->Y(3.0);
	*/
	
	//EJERCICIO4
	/*
	shared_ptr<Point> p  = make_shared<Point>(5.0,2.0);
	p->print();
	*/
	//EJERCICIO5
	shared_ptr<Point> p  = make_shared<Point>(5.0,2.0);
	weak_ptr<Point> A = p;
	shared_ptr<Point> nuevo = A.lock();
	nuevo->print();
	
	return 0;
 }