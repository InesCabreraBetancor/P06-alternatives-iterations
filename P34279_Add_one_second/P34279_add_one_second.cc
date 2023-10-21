/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
* 
* @author Inés Cabrera Betancor
* @date OCT 21 2023
* @brief this program adds one second to a clock time, given its hours, minutes and seconds.
*/

#include<iostream>

int main() {
  int hours {0}, minutes {0}, seconds {0};
  std::cin >> hours >> minutes >> seconds;
  
  ++seconds;
  if (seconds == 60) {
    ++minutes;
    seconds = 0;
  if (minutes == 60) {
    ++hours;
    minutes = 0;
  }
  if(hours == 24) hours = 0;
  }
  if(hours < 10) std::cout << 0; 
    std::cout << hours << ":";
  if(minutes < 10) std::cout << 0;
    std::cout << minutes << ":";
  if(seconds < 10) std::cout << 0; 
    std::cout << seconds << std::endl;

  return 0;
}
