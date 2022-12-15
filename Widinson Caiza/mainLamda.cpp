#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <vector>
#include <stdio.h>
#include <algorithm>
#include <random>
#include <iterator>
#include <functional>

using namespace std;
void lambda1(int);


int main(){
    int opcion, filas, columnas;
    auto n = 0;
    auto m = 0.0;

    do{
        system("color F");
        cout << "1. Lambda 1: [&, i] ( parametros ) -> return { body }" << endl;
        cout << "2. Salir" << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;
        switch(opcion){
          
            case 1:
                lambda1(n);
                cout << endl;
                system("pause");
                break;
            case 2:
                break;
            default:
                cout << "Opcion invalida" << endl;
                system("pause");
                break;
        }
    system("cls");
    }while(opcion != 2);


    return 0;
}

void lambda1(int n){
    auto lambda1 = [&](int n) -> void{
        fflush(stdin);
        cout << "Ingrese cuantos numeros aleatorios quiere generar: ";
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            v[i] = 1 + rand() % 100;
        }
        for(int i = 0; i < n; i++){
            cout << v[i] << " ";
        }
        cout << endl;
        cout << "Numeros Pares: " << endl;
        for(int i = 0; i < n; i++){
            if(v[i] % 2 == 0){
                cout << v[i] << " ";
            }
        }
        cout << endl;
    };
    lambda1(n);
}