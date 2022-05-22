#pragma once
#include <iostream>
using namespace std;
class Complex{
	public:
		Complex(int,int);
		~Complex();
		Complex operator+(Complex const & obj);
		void print();
		private:
		int real, imag;
};


Complex::Complex(int r = 0, int i = 0)
{
	real = r;
	imag = i;
}
Complex::~Complex(){}

Complex Complex::operator+(Complex const &obj)
{
	Complex res;
	res.real = real + obj.real;
	res.imag = imag + obj.imag;
	return res;
	return Complex();
}
void Complex::print()
{
	cout << real << " + i" << imag << endl;
}