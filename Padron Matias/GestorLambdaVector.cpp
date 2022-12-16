
/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón
FECHA DE CREACIÓN: 15/12/2022
FECHA DE MODIFICACIÓN: 15/12/2022
TareaIndividual_Lamba
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>
#include "Lista.cpp"
#include "ValidacionDatos.cpp"
using namespace std;

int main()
{
	
	  auto duplicarValores = [] (int x) -> int
    {
        return x * 2;
    };
	Lista objLista;
	/*objLista.mostrarPorCabeza();
	Nodo *aux = objLista.getPrimero();
	for(int i=1;i<=6;i++){
		
	cout<<"\nNodo "<<i<<": "<<duplicarValores(aux->getValor());
	aux=aux->getSiguiente();
	}*/
	
	ValidacionDatos objValidar;
char valorV[10],opV[10];
int valor,opI;
do{
system("cls");
cout<<"Ejercicio funcion lamba con lista simple"<<endl;
cout<<"1. Insertar valor"<<endl;
cout<<"2. Eliminar por Cola"<<endl;
cout<<"3. Mostrar"<<endl;
cout<<"4. Duplicar valores en lista"<<endl;
cout<<"5.Salir"<<endl;
opI=objValidar.casteoEnteros(opV,"\nSeleccione la opcion-> ");	
switch(opI){

	case 1:{
	valor=objValidar.casteoEnteros(valorV,"\nIngrese el valor-> ");
	objLista.insertarPorCola(valor);
		break;
	}

	case 2:{
		system("cls");
		
		objLista.eliminarPorCola();
		break;
	}
	case 3:{
		system("cls");
		objLista.mostrarPorCabeza();
		system("pause");
		break;
	}
	case 4:{
		system("cls");
		objLista.mostrarPorCabeza();
		Nodo *aux = objLista.getPrimero();
		for(int i=1;i<=objLista.getNumNodo();i++){
		cout<<"\nNodo "<<i<<": "<<duplicarValores(aux->getValor());
		aux=aux->getSiguiente();
	}
	cout<<endl;
		system("pause");
		break;
	}
	
}
}while(opI!=5);

    
    return 0;
}


