#include <bits/stdc++.h>
using namespace std;

struct Elementos{
	public:
		int a;
		int b;

		Elementos(int _a,int _b){
			a=_a;
			b=_b;
		} 
		
};

struct less_than_key
{
    inline bool operator() (const Elementos& struct1, const Elementos& struct2)
    {
        return (struct1.a < struct2.a and struct1.b<struct2.b);
    }
};



int main(){
	std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> dist6(1,20); 
    
	Elementos uno(dist6(rng),dist6(rng));
	Elementos dos(dist6(rng),dist6(rng));
	Elementos tres(dist6(rng),dist6(rng));
	Elementos cuatro(dist6(rng),dist6(rng));
	Elementos cinco(dist6(rng),dist6(rng));
	
	vector<Elementos> lista;
	lista.push_back(uno);
	lista.push_back(dos);
	lista.push_back(tres);
	lista.push_back(cuatro);
	lista.push_back(cinco);
	cout<<"ANTES DEL SORT \n";
	for(auto c:lista){
		cout<<c.a<<" - "<< c.b<<endl;
	}
	sort(lista.begin(),lista.end(),less_than_key());
	cout<<"DESPUES DEL SORT \n";
	for(auto c:lista){
		cout<<c.a<<" - "<< c.b<<endl;
	}
	return 0;	
}
