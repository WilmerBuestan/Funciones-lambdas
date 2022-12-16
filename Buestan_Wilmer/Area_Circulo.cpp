/* 
UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE 
Alumnos: Wilmer Buestan
Fecha de Creación: 15/12/2022
Fechade Modificación: 16/12/2022
Enunciado: Operaciones de Funcion Lambda
NRC: 7999
*/

#include <iostream>
#include <cmath>

int main() {
  // Define la función lambda
  auto area = [](double r) {
    return M_PI * r * r;
  };

  // Usa la función lambda para calcular el área de un círculo de radio 2
  std::cout << "El área del círculo de radio 2 es: " << area(2) << std::endl;

  return 0;
}
