/*
    Universidad de las Fuerzas Armadas ESPE
    Enunciado: Programa con funciones lambda
    Autor: David Cantuña
    Fecha de creación: 13/12/2022
    Fecha de modificación: 12/12/2022
*/

#include <iostream>
#include <functional>
#include <algorithm>
#include <string>
#include <array>
#include "Lambda.h"
#include "ValidarDatos.h"

/*
class Persona {
private:
    std::string nombre;
    int numTrabajos;
    int numEmpleados;
    std::function<int(int, int)> contador;
public:
    Persona(std::string nombre, int nTrabajos, int nEmpleados, std::function<int(int, int)> cont) {
        this->nombre = nombre;
        this->numTrabajos = nTrabajos;
        this->numEmpleados = nEmpleados;
        this->contador = cont;
    }

    int contadorEmpleadosTrabajos() {
        return contador(numTrabajos, numEmpleados);
    }
};
*/
int main(){

    /*
    // 1 forma
    Persona p1("David", 4, 6, [](int a, int b) {
        return a + b;
    });

    std::cout << "Suma de Trabajos y Empleados: " << p1.contadorEmpleadosTrabajos() << std::endl;
    */

    /*
    // 2 forma
    
    int num1 = 10;
    int num2 = 100;
    auto f = [&](int num3) -> int {
        num1 += 1;
        num2 += 2;
        return num3 + num1 + num2;
    };

    int num3 = 20;

    std::cout << f(num3) << std::endl;
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    */

    /*
    // 3 forma
    std::array<std::string, 4> arr{ "amarillo", "morado", "verde", "gris"};

    auto encontrado{ std::find_if(arr.begin(), arr.end(), [](std::string str) {
        return (str.find("mo") != std::string::npos);
    }) };

    if (encontrado == arr.end()) {
        std::cout << "Elemento no encontrado" << std::endl;
    }
    else {
        std::cout << "Elemento encontrado en: " << *encontrado << std::endl;
    }
    */

    Lambda lamda;
    ValidarDatos val;
    std::array<std::string, 4> arr{ "amarillo", "morado", "verde", "gris" };
    std::string color = val.validarLetras("Ingrese el nombre completo a o las primeras letras del color que desea buscar: ");
    lamda.encontrado(arr, color);
}

