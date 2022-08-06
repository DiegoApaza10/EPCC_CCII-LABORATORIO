#include <vector>
#include <iostream>
using namespace std;

/////EJERCICIO 1
/*
template <int N>
struct Factorial
{
	enum { value = N + Factorial <N - 1 >::value };
};

template <>
struct Factorial <1>
{
	enum { value = 1 };
};

int main(){
	int x = Factorial<8>::value;
	cout << x << endl;
	return 0;
}

*/

////////////////////////////

////////EJERCICIO 2//

/*
template <unsigned long N>
struct Fibonacci
{
    enum
    {
        value = Fibonacci<N-1>::value + Fibonacci<N-2>::value
    };
    static void anadir_valor(vector<unsigned long>& v)
    {
        Fibonacci<N-1>::anadir_valor(v);
        v.push_back(value);
    }
};

template <>
struct Fibonacci<0>
{
    enum
    {
        value = 0
    };
    static void anadir_valor(vector<unsigned long>& v)
    {
        v.push_back(value);
    }

};

template <>
struct Fibonacci<1>
{
    enum
    {
        value = 1
    };
    static void anadir_valor(vector<unsigned long>& v)
    {
        Fibonacci<0>::anadir_valor(v);
        v.push_back(value);
    }
};



int main()
{
    vector<unsigned long> fibonacci_seq;
    Fibonacci<10>::anadir_valor(fibonacci_seq);
    for (int i = 0; i <=10 ; ++i)
        cout << fibonacci_seq[i] <<" - ";
}
*/


////////////////////////////////////
//EJERCICIO 3

/*

template<class T>
T pow(const T base, unsigned const exponent)
{
    return (exponent == 0) ? 1 : (base * pow(base, exponent-1));
}

int main()
{
	int a,b;
	cout<<"Ingrese un numero para que sea la base de la potencia: ";cin>>a;
	cout<<"Ingrese un numero para que sea el exponenete ";cin>>b;
    cout << "potencia("<<a<<","<<b<<"): " << pow(a, b) << std::endl;
}

*/

//EJERCICIO 5/////////////////////

template<typename T>
T binario(const T num)
{
    return (num == 0)? 0 : num % 2 + 10 * binario(num/ 2);
}
int main()
{
	int b;
	cout<<"Ingrese un  ";cin>>b;
    cout << binario<int>(b);
}
////////////////////////////////////
