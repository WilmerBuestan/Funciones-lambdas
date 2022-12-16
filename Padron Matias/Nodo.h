/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón
FECHA DE CREACIÓN: 15/12/2022
FECHA DE MODIFICACIÓN: 15/12/2022
TareaIndividual_Lamba
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>

class Nodo{
	private:
		int valor;
		Nodo *siguiente;
	public:
		Nodo(int _valor, Nodo *);
    	int getValor(void);
    	void setValor(int newValor);
    	Nodo *getSiguiente(void);
    	void setSiguiente(Nodo *newSiguiente);
		~Nodo();
	};