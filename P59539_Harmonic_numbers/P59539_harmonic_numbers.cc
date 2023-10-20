/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file harmonic_numbers.cc
  * @author Ines Cabrera Betancor
  * @date Oct 20 2023
  * @brief Given one number, the program calculates the harmonic number until that digit
  * @bug There are no known bugs
  */

#include<iostream>
#include<iomanip>

int main() {
  int limit{0};
  std::cin >> limit;
  double harmonic{0.0};
  for (double i = 1; i <= limit; i++) {
    harmonic += (1 / i);
  }
  std::cout << std::fixed << std::setprecision(4) << harmonic << std::endl;
  return 0;
}
