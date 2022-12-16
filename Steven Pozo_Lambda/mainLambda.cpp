//funciones lambda

#include <iostream>
#include <vector>
#include <stdlib.h>
#include <algorithm> //bliblioteca para usar for_each
#include <string>
#include "Lambda.hpp"

using namespace std;

int main() {
    Lambda lam;
    lam.imprimirNombrePersonas();
    cout<<"****************************************************************************************"<<endl;
    lam.CalcularParImpar();

    return 0;
}