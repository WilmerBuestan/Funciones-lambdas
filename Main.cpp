/*
	UFA-ESPE
	Alumnos: Sebastian Rivera.
	Fecha de modificación: 16/12/2022
	Enunciado: Funciones Lambda
	Nivel.- 3   NRC:7999
*/
#include <iostream>
#include "calculator.h"
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <cctype>
#include <conio.h>
#include <cctype>
#include "Cvalidacion.cpp"
int main() {
	Cvalidacion ent;
	int num;
	std::cout << "Ingresa un número: ";
	cin >> num;
	ent.ingresarDatosEnteros(ptr,num);
	
	// Utiliza las funciones lambda para calcular algunos valores
	std::cout << num << "^2 = " << FuncionesLambda::ent.cuadradoDeEntero << std::endl;
	std::cout << num << "^3 = " << FuncionesLambda::ent.cuboEntero << std::endl;
	std::cout << num << "! = " << FuncionesLambda::ent.factorialEntero << std::endl;
	
	return 0;
}