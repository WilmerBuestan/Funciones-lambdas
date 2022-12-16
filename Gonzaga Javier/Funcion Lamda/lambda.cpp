#include <iostream>

int main() {
    // La sintaxis para crear una función lambda es:
    // [capturas] (parametros) -> tipo_devuelto { cuerpo_de_la_función }

    // Por ejemplo, podemos crear una función lambda que sume dos números:
    auto sumar = [](int x, int y) -> int { return x + y; };

    // Podemos usar la función lambda como cualquier otra función:
    int resultado = sumar(3, 4);
    std::cout<<"La suma es: "<<resultado<<std::endl;

    //return 0;
    system("pause");
}
