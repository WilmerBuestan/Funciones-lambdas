
#include "OperacionesResMul.cpp"

int main(){
	OperacionesResMul *obj1 = new OperacionesResMul(0,0);
	obj1->insertar(obj1);
	cout<<"La hipotenusa es: "<<obj1->calcularHipotenusa(obj1->getA(),obj1->getB());	
}