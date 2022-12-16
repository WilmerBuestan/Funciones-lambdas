/***********************************************************************
 * UFA - ESPE
 * Students:  Luis Burbano
 * Module:  F.hpp
 * Created: Sabado, 19 de noviembre de 2022 10:51:00
 * Modified: Lunes, 21 de noviembre de 2022 02:11:31
 * Problem: Correcion de la prueba parcial 1 con recursividad
 * Level: Level three
 * NRC: 7999
 ***********************************************************************/

#include <iostream>

using namespace std;

class Funciones
{
public:
    int getNumeroA()
    {
        return numeroA;
    }
    int getNumeroB()
    {
        return numeroB;
    }
    void setNumeroA(int newNumeroA)
    {
        numeroA = newNumeroA;
    }
    void setNumeroB(int newNumeroB)
    {
        numeroB = newNumeroB;
    }
    Funciones(int newNumeroA, int newNumeroB)
    {
        numeroA = newNumeroA;
        numeroB = newNumeroB;
    }
    Funciones(){

    }

    int suma()
    {
        int resultado = 0;
        auto funcionLambda = [=]()
        { return numeroA + numeroB; };
        resultado = funcionLambda();
        return resultado;
    }
    int resta(){
        int resultado = 0;
        auto funcionLambda = [=]()
        { return numeroA - numeroB; };
        resultado = funcionLambda();
        return resultado;
    }
    int multiplicacion(){
        int resultado = 0;
        auto funcionLambda = [=]()
        { return numeroA * numeroB; };
        resultado = funcionLambda();
        return resultado;
    }
    double division(){
        double resultado = 0.0;
        auto funcionLambda = [=]()
        { return numeroA / (numeroB*1.0); };
        resultado = funcionLambda();
        cout<<"El resultado es: "<<resultado<<endl;
        return resultado;
    }


private:
    int numeroA;
    int numeroB;
};