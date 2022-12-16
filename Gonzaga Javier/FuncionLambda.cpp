#include <iostream>

int main() {
    // La sintaxis para crear una funciÃ³n lambda es:
    // [capturas] (parametros) -> tipo_devuelto { cuerpo_de_la_funciÃ³n }

    // Por ejemplo, podemos crear una funciÃ³n lambda que sume dos nÃºmeros:
    auto sumar = [](int x, int y) -> int { return x + y; };

    // Podemos usar la funciÃ³n lambda como cualquier otra funciÃ³n:
    int resultado = sumar(3, 4);
    std::cout<<"La suma es: "<<resultado<<std::endl;

    //return 0;
    system("pause");
}
