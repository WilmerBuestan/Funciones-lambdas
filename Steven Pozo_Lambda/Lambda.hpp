#include <iostream>
#include <vector>
#include <stdlib.h>
#include <algorithm> //bliblioteca para usar for_each
#include <string>
#include "Validaciones.hpp"

Validaciones validar;
using namespace std;
class Lambda
{
	public:
		void CalcularParImpar(){
			vector<int> numeros;
			int valor;
			int cantidad;
			
			cout<<"CALCULAR NUMEROS PAR E IMPAR"<<endl;
			cout<<"Cantidad de numeros: ";
			cantidad=validar.validarEnteros();
			cout<<"\n";
			for(int i=0;i<cantidad; i++){
				cout<<"Numero: ";
				valor=validar.validarEnteros();
				cout<<"\n";
				numeros.push_back(valor);
			}
			auto lista_numeros=[](const int & num){
				if(num%2==0){
		            cout<<"El numero "<<num<<" es par \n";
		        }else{
		            cout<<"El numero "<<num<<" es impar \n";
		        }
			};
			for_each(numeros.begin(), numeros.end(), lista_numeros);
		}
		
		void imprimirNombrePersonas(){
			
			vector<string> nombre;
			string nombres;
			int cantidad;
			cout<<"IMPRIMIR NOMBRES"<<endl;
			cout<<"Cantidad de nombres: ";
			cantidad=validar.validarEnteros();
			cout<<"\n";
			for(int i=0;i<cantidad; i++){
				cout<<"Nombres: ";
				nombres=validar.validarStrings();
				cout<<"\n";
				nombre.push_back(nombres);
			}
		    auto lista_nombre=[](const string & lista){cout<<"El nombre de la persona es: "<<lista<<"\n";};
		    for_each(nombre.begin(), nombre.end(),lista_nombre);
		}
	
	
	
};