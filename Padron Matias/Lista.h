/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón
FECHA DE CREACIÓN: 15/12/2022
FECHA DE MODIFICACIÓN: 15/12/2022
TareaIndividual_Lamba
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/
#pragma once
#include "Nodo.cpp"


using namespace std;
class Lista{
	private:
		Nodo *primero;
		Nodo *actual;	
		int numNodo;
	public:
		//métodos de los atributos
		Lista();
		void setPrimero(Nodo *);
		void setActual(Nodo *);
		Nodo *getPrimero();
		Nodo *getActual();
		int getNumNodo();
		bool getListaVacia();
		//métodos de orden de la lista
		void insertarPorCabeza(int);
		void insertarPorCola(int);
		void eliminarPrimeraOcurrencia(int);	
		void eliminarPorCabeza();
		void eliminarPorCola();
		void mostrarPorCola();
		void mostrarPorCabeza();
		int contar();
		void buscar(int);
};