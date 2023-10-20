/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file numbers_interval.cc
  * @author Ines Cabrera Betancor
  * @date Oct 20 2023
  * @brief Given two numbers, the program prints de numbers in between these two
  * @bug There are no known bugs
  */

#include<iostream>

int main() {
  int number1{0}, number2{0};
  std::cin >> number1 >> number2;
  for (int i = number1; i < number2; i++) {
    std::cout << i << ",";
  }
  std::cout << number2 << std::endl;
  return 0;
}
