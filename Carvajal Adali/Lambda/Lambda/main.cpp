
#include <iostream>
#include <random>
#include "Validaciones.h"
#include "Operaciones.h"
using namespace std;

void lambda1();
void lambda2();
void lambda3();
void lambda4();
int random(int desde, int hasta);
int factorial1(int n);
bool par(int n);

int random(int desde, int hasta) {

	random_device rd;
	mt19937 mt(rd());
	uniform_real_distribution<double> dist(desde, hasta);
	int x = dist(mt);
	return x;

}
int factorial1(int n) {

	int ret = 1;
	while (n > 1)
		ret *= n--;
	return ret;
}
bool par(int n) {

	int resto = n % 2;
	if (resto == 0)
		return true;
	else return false;
}
void lambda1() {

	int* num = (int*)malloc(10 * sizeof(int));
	int* ale = (int*)malloc(10 * sizeof(int));

	for (int i = 0; i < 10; i++) {
		*(ale + i) = random(1, 10);
	}

	auto f = [=](int* arreglo) ->void {

		for (int i = 0; i < 10; i++) {
			*(num + i) = *(ale + i);
		}

		cout << "Factoriales" << endl;

		for (int k = 0; k < 10; k++) {
			cout << *(num + k);
			cout << " ==> " << factorial1(*(num + k)) << endl;
		}
	};
	f(num);
	free(num);
	free(ale);
}
void lambda2() {

	int* ptr = (int*)malloc(10 * sizeof(int));
	int* pares = (int*)malloc(10 * sizeof(int));
	int* ale = (int*)malloc(10 * sizeof(int));

	for (int i = 0; i < 10; i++) {
		*(ale + i) = random(1, 10);
	}

	auto p = [&, ale](int* ptr) -> void {

		int num_par = 0;

		for (int i = 0; i < 10; i++) {
			*(ptr + i) = *(ale + i);
		}

		for (int i = 0; i < 10; i++) {
			if (par(*(ptr + i))) {
				*(pares + i) = *(ptr + i);
			}
			else {
				*(pares + i) = NULL;
			}
		}

		for (int j = 0; j < 10; j++) {
			cout << *(ptr + j) << endl;
		}

		cout << "\tPares" << endl;

		for (int k = 0; k < 10; k++) {
			if (*(pares + k) != NULL)
			cout << (k + 1) << " ==> " << *(pares + k) << endl;
		}

	};
	p(ptr);
	free(ptr);
	free(pares);
	free(ale);
}
void lambda3() {
	int s1 = 0, s2 = 0, s3 = 0;
	int* lados = (int*)malloc(3 * sizeof(int));
	int* ale = (int*)malloc(10 * sizeof(int));

	for (int i = 0; i < 10; i++) {
		*(ale + i) = random(1, 9);
	}

	auto triangulo = [=, &lados](int s1, int s2, int s3) -> void {

	
		for (int i = 0; i < 3; i++) {
			*(lados + i) = *(ale + i);
		}

		s1 = *(lados + 0) + *(lados + 1);
		s2 = *(lados + 0) + *(lados + 2);
		s3 = *(lados + 1) + *(lados + 2);

		cout << "Triangulo" << endl;

		for (int k = 0; k < 3; k++) {
			cout << "Lado " << (k + 1) << "=> " << *(lados + k) << endl;
		}

		if (s1 > *(lados + 2)) {
			if (s2 > *(lados + 1)) {
				if (s3 > *(lados + 0)) {
					cout << ("Si se forma un triagulo") << endl;
				}
				else
					cout << ("No se forma un triagulo") << endl;
			}
			else
				cout << ("No se forma un triagulo") << endl;
		}
		else
			cout << ("No se forma un triagulo") << endl;

	};

	triangulo(s1, s2, s3);
	free(lados);
	free(ale);
}
void lambda4() {

	vector <int> vector1;
	int n, aleatorio, HASTA, DESDE;
	Validaciones v;

	n = v.validacionEntero("Ingrese el numero de elementos que tendra el vector: ");
	DESDE = v.validacionEntero("\nIngrese el valor minimo que puede tener el vector: ");
	HASTA = v.validacionEntero("\nIngrese el valor maximo que puede tener el vector: ");
	cout << endl;

	auto llenar = [&](int& n, int& DESDE, int& HASTA) {
		for (int i = 0; i < n; i++) {
			aleatorio = rand() % (HASTA - DESDE + 1) + DESDE;
			vector1.push_back(aleatorio);
		}
	};

	auto mostrar = [&vector1](int& n) {
		for (int x : vector1) {
			cout << x << " ";
		}
	};

	auto ordenar = [&](int& n) {
		int aux, i, j;
		for (i = 1; i < n; i++) {
			for (j = n - 1; j >= i; j--) {
				if (vector1[j - 1] > vector1[j]) {
					aux = vector1[j - 1];
					vector1[j - 1] = vector1[j];
					vector1[j] = aux;
				}
			}
		}
	};

	llenar(n, DESDE, HASTA);
	cout << endl;
	cout << "Vector original" << endl;
	mostrar(n);
	cout << endl;
	ordenar(n);
	cout << endl;
	cout << "Vector ordenado" << endl;
	mostrar(n);

}
int main()
{
	lambda1();
	cout << "Numeros Pares" << endl;
	lambda2();
	lambda3();
	lambda4();

}
