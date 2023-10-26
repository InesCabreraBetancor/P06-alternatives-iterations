/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
* 
* @author Inés Cabrera Betancor
* @date OCT 26 2023
* @brief this program reads two numbers x and y, and prints all numbers between 
* x and y (or between y and x), in decreasing order.
*/

#include<iostream>

int main() {
  int numero_1 {0};
  int numero_2 {0};
  std::cin >> numero_1 >> numero_2;
  if ( numero_1 <= numero_2) {
    for (numero_2 == numero_2; numero_2 >= numero_1; numero_2--) {
    std::cout << numero_2 << std::endl;
    }
  } else if ( numero_1 >= numero_2) {
      for (numero_1 == numero_1; numero_1 >= numero_2; numero_1--) {
      std::cout << numero_1 << std::endl;
      }
    }
  return 0;
}
