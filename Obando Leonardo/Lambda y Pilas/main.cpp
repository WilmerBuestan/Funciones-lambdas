#include "Pila.h"
#include "Validacion.h"
#include <iostream>
#include <stack>

using namespace std;

int main() {
	
	int dato = 0;
	int suma = 0;
	bool continuar = true;	

	// usando clase Pila
	Pila* pila = new Pila();
	// usando stack
	stack<int> pila2;
	
	while (continuar)
	{		
		cout << "\n Ingrese un numero: ";
		dato = Validacion::ingresar_DatosEnteros();
		pila->push(dato);
		pila2.push(dato);
		auto sumaLambda = [&suma](int dato) {suma += dato; };
		sumaLambda(dato);
		cout << "\n La suma es: " << suma << endl;
		if (continuar) {
			cout << "\nDesea continuar? (1)Si (0)No: ";
			continuar = Validacion::ingresar_DatosEnteros();			
		}
	}
	
	cout << "\nLa Pila ingresada usando una Clase Pila es: " << endl;
	
	auto mostrarPila = [](Pila* pila) {
		while (!pila->isEmpty()) {
			cout << "\t---" << endl;
			cout << "\t|" << pila->pop() << "|" << endl;
		}
	};
	mostrarPila(pila);

	cout << "\nLa pila ingresada usando stack es: " << endl;
	auto mostrarPilaStack = [](stack<int> pila) {
		while (!pila.empty()) {
			cout << "\t---" << endl;
			cout << "\t|" << pila.top() << "|" << endl;
			pila.pop();
		}
	};
	
	mostrarPilaStack(pila2);

	
	return 0;
}