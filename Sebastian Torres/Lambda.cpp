#include "Lista.cpp"
#include "ValidacionDatos.cpp"
using namespace std;

int main(int argc, char** argv){
	/*
	Lista lista1;
	Lista resultado;
	lista1.insertarPorCabeza(2); 	
	lista1.insertarPorCabeza(3);
	lista1.insertarPorCabeza(5);
	lista1.insertarPorCabeza(6);
	lista1.insertarPorCabeza(1);
	
	auto multiplicar =[&lista1](){
		Nodo *aux=lista1->getPrimero();
		int num=0;
		while(aux!=NULL){
			num=lista1->getActual()->getValor()*3;
			aux=aux->getSiguiente();
			cout<<" "<<num;
		}	
		cout<<"\n";
	};
	
	multiplicar();
	*/
	
	auto multiplicar =[](){
		int num=0;
		for(int i=0;i<=10;i++){
			num=(i)*i;
			cout<<" "<<num;
		}	
		cout<<"\n";
	};
	
	multiplicar();
	
	return 0;
}