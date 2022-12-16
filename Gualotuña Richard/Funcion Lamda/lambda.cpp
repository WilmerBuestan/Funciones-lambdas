/* UFA ESPE
Funciones Lambda
ALumno: Gualotuña Richard
Fecha creacion: 15-12-2022
Fecha modificacion: 15-12-2022
NRC: 7999
 */
#include <list>
#include <algorithm>
#include <iostream>

int main()
{
    using namespace std;

    // Crea una lista de números enteros con algunos elementos iniciales.
    list<int> numeros;
    numeros.push_back(13);
    numeros.push_back(17);
    numeros.push_back(42);
    numeros.push_back(46);
    numeros.push_back(99);

    // Use la función find_if y una expresión lambda para encontrar el primer número par de la lista.

    const list<int>::const_iterator result =
        find_if(numeros.begin(), numeros.end(),[](int n) { return (n % 2) == 0; });

    // Imprimir el resultado
    if (result != numeros.end()) {
        cout << "El primer número par de la lista es: " << *result << "." << endl;
    } else {
        cout << "La lista no contiene números pares." << endl;
    }
}