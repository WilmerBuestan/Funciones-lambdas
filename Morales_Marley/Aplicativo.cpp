
#include "operaciones.cpp"


int main(){
	operaciones *obj= new operaciones(0,0);
	obj->ingresar(obj);
	//En la funcion mcm se encuntra nuestra funcion lamdba  
	cout<<"El mcm de los numeros ingresados es:  "<<obj->mcm(obj->getNum1() , obj->getNum2());
	return 0;
}
