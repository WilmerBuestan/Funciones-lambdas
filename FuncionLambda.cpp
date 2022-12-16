/* UFA ESPE
Funciones Lambda
ALumno: Leon William
Fecha creacion: 15-12-2022
Fecha modificacion: 15-12-2022
NRC: 7999
 */

#include <iostream>
#include <string>
#include <functional>   //Libreria para funciones lambda
using namespace std;

bool esEntero(string); //Prototipo de la funcion
int main()
{
    bool rep = true;
    int a, b;
    string num;
    do {
        cout << "Ingrese el primer numero: ";
        getline(cin, num); //getline lee una linea completa
        if (esEntero(num)) {
            a = stoi(num); //stoi convierte un string a entero
            rep = false;
        }
        else {
            cout << "El valor ingresado no es un numero entero" << endl;
        }
    } while (rep);
    rep = true;
    do {
        cout << "Ingrese el segundo numero: ";
        getline(cin, num); //getline lee una linea completa
        if (esEntero(num)) {
            b = stoi(num); //stoi convierte un string a entero
            rep = false;
        }
        else {
            cout << "El valor ingresado no es un numero entero" << endl;
        }
    } while (rep);

    //Funcion lambda para comparar 2 numeros enteros
    auto mayor = [](int a, int b) -> bool {         //auto es para que el compilador infiera el tipo de dato
        return a > b;                               //return es para que la funcion devuelva un valor
    };
    //----------------------------------------------
    if (mayor(a, b)) { //Si a es mayor que b
        cout << "El numero " << a << " es mayor que " << b << endl; //Imprime el resultado
    } else {
        cout << "El numero " << b << " es mayor que " << a << endl; //Imprime el resultado
    }
    return 0;
}


//Funcion de validación para verificar si un string es un numero entero
bool esEntero(string linea) {
	bool esEntero = true;
	int longitud = linea.size(); //size() devuelve la longitud de un string

	if (longitud == 0) {
		esEntero = false;
	}
	else if (longitud == 1 && !isdigit(linea[0])) { //isdigit verifica si un caracter es un digito
		esEntero = false;
	}
	else {
		int indice = 0;
		if (linea[0] == '+' || linea[0] == '-') { //Si el primer caracter es un signo
			indice = 1;
		}
		else {
			indice = 0;
		}

		while (indice < longitud) {
			if (!isdigit(linea[indice])) { //isdigit verifica si un caracter es un digito
				esEntero = false;
				break;
			}
			indice++;
		}
	}


	return esEntero;
}