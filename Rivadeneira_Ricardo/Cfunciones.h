/*
	UFA-ESPE
	Nombre: Ricardo Rivadeneira
	Fecha de creación: 14/12/2022
	Fecha de modificación: 16/12/2022
	Enunciado: Realizar un ejemplo de funciones lambda.
	Nivel.- 3   NRC: 7999
*/
#pragma once
#include <iostream>
#include <string>
using namespace std;

class Cfunciones {
    private:
        int *arr = NULL;
        //size_t: especifica la dimensión del tamaño de un elemento, la longitud de una cadena, cantidad de bytes que toma un puntero
        size_t cap;
        size_t elems;
        string name;
        double num;
public:
    Cfunciones() {
        arr = new int[10];
        cap = 10;
        elems = 0;
    };

    void insertar(const int &data);
    char *ingresarDatosEnteros(char *);
    bool confirmar(string);

    bool empty() const;
    size_t size() const;
    size_t capacity() const;
    int &operator[](size_t pos);

    ~Cfunciones();
    int *getDato(int);
};