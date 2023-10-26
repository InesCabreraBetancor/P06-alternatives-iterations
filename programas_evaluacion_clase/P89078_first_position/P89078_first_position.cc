/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Inés Cabrera Betancor
* @date 26 OCT 2023 
* @brief this program  reads a sequence of natural numbers and prints the position of the first even number.
*/

#include<iostream>
#include<vector>

int main() {
  std::vector<int> vec;
  int numeros{0};
  while (std::cin >> numeros) {
    vec.push_back(numeros);
  }
  for (int i=0; i < vec.size(); i++) {
    if ( vec[i] % 2 == 0) {
      std::cout << i + 1 << std::endl;
      return 0;
    }
  }
  return 0;
}
