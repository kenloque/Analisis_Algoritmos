#include <iostream>

using namespace std;

//----------- PARTE 1 -----------
typedef struct INTeger{
	int value;
} integer;

class INT{
public:
	int value;
};

//----------- PARTE 2 -----------
class TestClass{
private:
	int ancho;
	string color;
	
public:
	int getAncho(){
		return this->ancho;
	}
	
	string getColor(){
		return this->color;
	}
	
	void setColor(string pColor){
		this->color = pColor;
	}
};

//----------- PARTE 3 -----------
class ptrDouble{
public:
	double* ptrDoubleValue;
	
	ptrDouble(double &pValue){
		ptrDoubleValue = &pValue;
	}
};

typedef struct TestStruct{
	 ptrDouble* ptrClassValue;
} ptrClass;

int main(){
	//Parte 1
	int value1;
	integer value2;
	INT value3 = INT();
	
	value1 = 1;
	value2.value = 1;
	value3.value = 1;
	cout << "Tamaño de int " << value1 << " es " << sizeof(value1) << endl;
	cout << "Tamaño de struct de int " << value2.value << " es " << sizeof(value2) << endl;
	cout << "Tamaño de class de int " << value3.value << " es " << sizeof(value3) << endl;
	
	//Parte 2
	//Ver la clase arriba correctamente señalada
	
	//Parte 3
	double pendiente = 3.14;
	ptrClass* sander;
	ptrClass struc;
	sander = &struc;
	ptrDouble* clase = new ptrDouble(pendiente);
	struc.ptrClassValue = clase;
	
	cout << "El valor es " ;
	cout << *sander->ptrClassValue->ptrDoubleValue << endl;
	
	delete clase;
	
	return 0;
}