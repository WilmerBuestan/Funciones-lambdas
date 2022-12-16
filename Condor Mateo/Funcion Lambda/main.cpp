#include <iostream>

using namespace std;

int main(){

    int num;
    int exponente;

    //funcion lambda que calcula la potencia de un numero
    auto calcularPow = [](int num, int exponente){
        int resultado = 1;
        for(int i = 0; i < exponente; i++){
            resultado *= num;
        }

        return resultado;
    };
   
    //programa que calcula la potencia de un numero usando una funcion lambda
    cout <<"\n==============================================\n"<< endl;
    cout << "Ingrese la base: ";
    cin >> num;
    cout << "Ingrese el exponente: ";
    cin >> exponente;
    cout << "El resultado es: " << calcularPow(num, exponente) << endl;

    cout <<"\n==============================================\n"<< endl;
    

    return 0;
}


