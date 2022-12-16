/*
	UFA-ESPE
	Alumnos: Sebastian Rivera.
	Fecha de modificación: 16/12/2022
	Enunciado: Funciones Lambda
	Nivel.- 3   NRC:7999
*/
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <cctype>
#include <conio.h>
#include <cctype>

#include "Cvalidacion.h"


using namespace std;

class Cvalidacion
{
	public:

//Funciones para ingresar Datos
	char* Cvalidacion::ingresarDatosEnteros(char *msj){ //Puntero sinónimo de arreglo
	    char *dato=new char[10],c; //New instancia (fusionar o enlazar una clase con otra)
		int i=0; 
		printf("%s ",msj);
		while((c=getch())!=13){
			if(c>='0'&& c<='9'){
				printf("%c",c);
				dato[i++]=c;
					}
			else if(c==8||c==127){
				printf("\b \b");
				dato[i--]=0;
			}
		}
		dato[i]='\0';
		return dato;
	}
};