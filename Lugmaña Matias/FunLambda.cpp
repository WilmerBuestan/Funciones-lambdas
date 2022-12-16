#include <iostream>
#include <algorithm>
#include <vector>
int main()
{
   /* // Declarar la función lambda
    auto sum = [](int x, int y) { return x + y; };

    // Usar la función lambda
    std::cout << sum(1, 2) << std::endl;  // Imprime 3*/
    
    //EJEMPLO 2 
    
    // Creamos un vector de enteros
    std::vector<int> v = {1, 2, 3, 5};

    // Creamos una función lambda que toma un entero como argumento y
    // devuelve verdadero si el entero es mayor que 3 y falso en caso contrario
    auto mayorTres = [](int x) { return x > 3; };

    // Usamos la función lambda para contar cuántos elementos del vector son mayores que 3
    int count = std::count_if(v.begin(), v.end(),  mayorTres);

    std::cout << "Hay " << count << " elementos mayores que 3 en el vector." << std::endl;


    return 0;
}