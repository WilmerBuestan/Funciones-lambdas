//Universidad de las Fuerzas Armadas ESPE
// Enunciado: Programa con funciones lambda 
//Autores:Camila Morales
//Fecha de creación:15/12/2022
//Fecha de modificación:15/12/2022

#include<iostream>
using namespace std;

int main() {
  //Atributos 
  int num1 = 10;
  int num2 = 7;

  // función lambda con tipo de retorno explícito 'doble'
  // devuelve la suma o el promedio dependiendo de la operación
  auto operation = []  (int a, int b,  string op) -> double {
    if (op == "sum") {
      return a + b;
    }
    else {
      return (a + b) / 2.0;
    }
  }; 

  //Encontrar la suma de num1 y num2
  auto sum = operation(num1, num2, "sum"); //lambda devuelve un valor entero, se convierte explícitamente en doubletipo.
  cout << "Suma = " << sum << endl;

  // encontrar el promedio de num1 y num2
  auto avg = operation(num1, num2, "avg"); //encontramos el promedio pasando alguna otra cadena como argumento
  cout << "Promedio = " << avg;
  }