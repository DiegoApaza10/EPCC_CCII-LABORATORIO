#include "iostream"
#include "cmath"
#include "string"
#include "ctime"

class persona{
    private:
        int fecha;
        
    public:
        persona(int); 
        ~persona(); 
        int edad();
};
persona::persona(int _fecha){
	fecha=_fecha;
}
persona::~persona(){}
int persona::edad(){
	int edad;
	time_t now = time(0);
    tm * time = localtime(&now);
    int year= 1900 + time->tm_year;
    edad=year-fecha;
    return edad;
}