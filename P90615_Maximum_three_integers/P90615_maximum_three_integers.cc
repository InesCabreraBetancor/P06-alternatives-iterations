/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file maximum_three_integers.cc
  * @author Ines Cabrera Betancor
  * @date Oct 20 2023
  * @brief Given three numbers, the program prints the maximum of all of them
  * @bug There are no known bugs
  */

#include <iostream>

int main() {
  int number1{0}, number2{0}, number3{0};
  std::cin >> number1 >> number2 >> number3;
  if (number1 > number2 && number1 > number3) {
    std::cout << number1 << std::endl;
  }
  if (number1 < number2 && number2 > number3) {
    std::cout << number2 << std::endl;
  }
  if (number1 < number3 && number2 < number3) {
    std::cout << number3 << std::endl;
  }
  return 0;
}
