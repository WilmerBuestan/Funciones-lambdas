/***********************************************************************
 * Module:  OperacionesResMul.cpp
 * Author:  camilo
 * Modified: jueves, 15 de diciembre de 2022 19:57:05
 * Purpose: Implementation of the class OperacionesResMul
 ***********************************************************************/

#include "OperacionesResMul.h"
#include <iostream>
#include <math.h>
using namespace std;

double OperacionesResMul::getA(void)
{
   return a;
}

void OperacionesResMul::setA(double newA)
{
   a = newA;
}

double OperacionesResMul::getB(void)
{
   return b;
}
void OperacionesResMul::setB(double newB)
{
   b = newB;
}

OperacionesResMul::OperacionesResMul(double a, double b)
{
	this->a = a;
	this->b = b;
}

OperacionesResMul::~OperacionesResMul()
{
   // TODO : implement
}

void OperacionesResMul::insertar(OperacionesResMul *obj){
	double a, b;
	cout<<"Ingrese uno de los catetos\n";
	cin>>a;
	this->setA(a);
	cout<<"Ingrese el otro cateto\n";
	cin>>b;
	this->setB(b);
	
}

double OperacionesResMul::calcularHipotenusa(double a, double b)
{
   auto hipotenusa=[](double a, double b){
   	return sqrt(pow(a,2)+pow(b,2));
   };
   return hipotenusa(a,b);
}

