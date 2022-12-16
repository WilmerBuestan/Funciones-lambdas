/***********************************************************************
 * UFA - ESPE
 * Students:  Luis Burbano
 * Module:  Funciones.hpp
 * Created: Miercoles, 14 de noviembre de 2022 16:51:00
 * Modified: Viernes, 16 de noviembre de 2022 00:11:31
 * Problem: Funciones lambda
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