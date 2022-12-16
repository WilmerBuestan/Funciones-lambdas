/*
	UFA-ESPE
	Nombre: Ricardo Rivadeneira
	Fecha de creación: 14/12/2022
	Fecha de modificación: 16/12/2022
	Enunciado: Realizar un ejemplo de funciones lambda.
	Nivel.- 3   NRC: 7999
*/
#pragma once
#include "Cfunciones.h"
#include <stdlib.h>
#include <conio.h>
#include <cstring>

Cfunciones::~Cfunciones() {
    delete [] arr;
}

char* Cfunciones::ingresarDatosEnteros(char *msj){ //Puntero sinónimo de arreglo
    char *dato=new char[10],c; 
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

void Cfunciones::insertar(const int &data) {
    if (elems < cap) {
        *(arr + elems) = data;
        elems++;
    } else {
        auto tmp_arr = new int[cap * 2];
        cap *= 2;
        for (int i = 0; i < elems; i++) {
            tmp_arr[i] = arr[i];
        }
        delete [] arr;
        arr = tmp_arr;

        *(arr + elems) = data;
        elems++;
    }
}

int &Cfunciones::operator[](size_t pos) {
    if (pos >= 0 &&  pos <= elems)
        return *(this->arr + pos);
    throw std::out_of_range("Error - No se puede acceder a los elementos ingresados");
}

size_t Cfunciones::size() const {
    return elems;
}

bool Cfunciones::empty() const {
    return elems == 0;
}

int *Cfunciones::getDato(int pos) {
    if (pos >= 0 && pos < elems)
        return arr + pos;
}

bool Cfunciones::confirmar(string mensaje) {
    bool confirmado;
    do {
        char input;
        std::cout << mensaje << " (S/N): ";
        std::cin >> input;
        bool invalido = std::cin.fail();

        std::cin.clear();
        std::cin.ignore(9999, '\n');

        if (invalido || (tolower(input) != 's' && tolower(input) != 'n')) { // convierte una serie a caracteres en minúsculas.
            continue;
        }

        confirmado = tolower(input) == 's';
        break;
    } while (true);
    return confirmado;
}