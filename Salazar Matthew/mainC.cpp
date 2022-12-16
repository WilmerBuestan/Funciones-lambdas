/* Universidad de las Fuerzas Armadas 
Funciones Lambda
ALumno: Salazar Matthew
Fecha creacion: 15-12-2022
Fecha modificacion: 15-12-2022
NRC: 7999
 */
#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    // Función para convertir grados centígrados a grados Fahrenheit
    auto c2f = [](double c) { return c * 9 / 5 + 32; };
    
    // Función para convertir grados centígrados a grados Kelvin
    auto c2k = [](double c) { return c + 273.15; };
    
    // Vector de temperaturas en grados centígrados
    vector<double> tempsC;
    double temp;
    cout << "Ingrese la temperatura en grados centigrados: ";
    cin >> temp;
    tempsC.push_back(temp);
    
    // Vector de temperaturas en grados Fahrenheit
    vector<double> tempsF;
    
    // Convertir las temperaturas de grados centígrados a grados Fahrenheit
    transform(tempsC.begin(), tempsC.end(), back_inserter(tempsF), c2f);
    
    // Imprimir las temperaturas en grados Fahrenheit
     cout  << "La temperatura en grados fahrenheit es: ";
    for (auto temp : tempsF)
        cout << temp << " ";
    cout << endl;
    
    // Vector de temperaturas en grados Kelvin
    vector<double> tempsK;
    
    // Convertir las temperaturas de grados centígrados a grados Kelvin
    transform(tempsC.begin(), tempsC.end(), back_inserter(tempsK), c2k);
    
    // Imprimir las temperaturas en grados Kelvin
    cout  << "La temperatura en grados kelvin es: ";
    for (auto temp : tempsK)
        cout << temp << " ";
    cout << endl;
    
    return 0;
}