#include "Pila.h"
#include <iostream>

using namespace std;

//constructor y destructor
Pila::Pila()
{
	tope = NULL;
}

Pila::~Pila()
{
	while (!isEmpty())
	{
		pop();
	}
}

//metodos
void Pila::push(int dato)
{
	Nodo<int>* nuevo = new Nodo<int>(dato);
	nuevo->setSiguiente(tope);
	tope = nuevo;
}

int Pila::pop()
{
	if (!isEmpty())
	{
		int dato = tope->getDato();
		Nodo<int>* aux = tope;
		tope = tope->getSiguiente();
		delete aux;
		return dato;
	}
	else
	{
		return -1;
	}
}

int Pila::peek()
{
	if (!isEmpty())
	{
		return tope->getDato();
	}
	else
	{
		return -1;
	}
}

bool Pila::isEmpty()
{
	return tope == NULL;
}


