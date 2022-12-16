/***********************************************************************
 * Module:  operaciones.cpp
 * Author:  Jeimy
 * Modified: jueves, 15 de diciembre de 2022 19:54:05
 * Purpose: Implementation of the class operaciones
 ***********************************************************************/
#include <iostream>
#include "operaciones.h"
using namespace std;

int operaciones::getNum1(void)
{
   return num1;
}


void operaciones::setNum1(int newNum1)
{
   num1 = newNum1;
}


int operaciones::getNum2(void)
{
   return num2;
}


void operaciones::setNum2(int newNum2)
{
   num2 = newNum2;
}


operaciones::operaciones(int numero1, int numero2)
{
	this->num1=numero1;
	this->num2=numero2;
}


operaciones::~operaciones()
{
   
}
//Ingreso de datos al objeto
void operaciones::ingresar(operaciones *obj){
	int num1, num2;
	cout<<"Minimo como un multiplo"<<endl;
	cout<<"Ingrese el primer numero"<<endl;
	cin>>num1;
	this->setNum1(num1);
	cout<<"Ingrese el segundo numero"<<endl;
	cin>>num2;
	this->setNum2(num2);

}
//Funcion contiene un lambda, realiza la operacion de minimo como un multiplo
int operaciones::mcm(int num1,int num2)
{
    auto minimocm= [](int num, int num2){
   	int mayor;
	int n;
	if(num>num2){
		mayor =num;
	}else{
		mayor =num2;
	}
	n=mayor;
	while ((n%num!=0)||(n%num2 !=0)){
		n=n+1;
	}
	return n;
   };
   return minimocm(num1,num2);
}

