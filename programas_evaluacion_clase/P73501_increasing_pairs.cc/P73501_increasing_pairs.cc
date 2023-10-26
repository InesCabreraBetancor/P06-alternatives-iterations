/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Inés Cabrera Betancor
* @date 26 OCT 2023 
* @brief this program reads sequences of natural numbers, and that for each one prints the number
* of pairs of consecutive numbers such that the second number of the pair is greater than the first one.
*/

#include<iostream>
#include<vector>

int main() {
  int cuantos_vectores{0}, contador{0}, numeros{0};
  std::cin >> cuantos_vectores;
  std::vector<int> vec;
  while (cuantos_vectores > 0) {
    while (std::cin >> numeros) {
      if (numeros == 0){ 
	break;
      } else {
         vec.push_back(numeros);
      }
      for (int i =0; i < vec.size() ; i++) {
        if ((vec[i] < vec[i+1] ) && (( (vec[i+ 1]) - vec[i]) > 0 )) {
          contador++;
	  std::cout << contador << " ";
        }
      }
    }
    std::cout << contador << std::endl;
    vec.resize(0);
    contador = 0;
    cuantos_vectores--;    
  }
  return 0;
}
