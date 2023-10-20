/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file uppercase_lowercase.cc
  * @author Ines Cabrera Betancor
  * @date Oct 20 2023
  * @brief Given a charater print its corrispondong upper or lowercase
  * @bug There are no known bugs
  */

#include <iostream>

int main() {
  char caracter;
  std::cin >> caracter;
  int numero_caracter = static_cast<int>(caracter);
  if ( numero_caracter > 64 && numero_caracter < 91) {
    std::cout << static_cast<char>(numero_caracter + 32) << std::endl;
  } 
  if ( numero_caracter > 96 && numero_caracter < 123) {
    std::cout << static_cast<char>(numero_caracter - 32) << std::endl;
  }
  return 0;
}
