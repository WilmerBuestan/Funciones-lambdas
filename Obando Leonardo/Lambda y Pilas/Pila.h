#pragma once
#include "Nodo.h"
class Pila
{
private:
	Nodo<int>* tope;
public:
	Pila();
	~Pila();
	void push(int dato);
	int pop();
	int peek();
	bool isEmpty();
};

