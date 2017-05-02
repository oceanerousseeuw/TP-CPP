#include <iostream>
#include "Fibonacci.hpp"

// g++ -Wall -Wextra -o main.out main.cpp

int main(){
  int resultat = fibonacciRecursif(7);
  std::cout << "Fibonacci récursif : " << resultat << std::endl;
  int resultat2 = fibonacciIteratif(7);
  std::cout << "Fibonacci itératif : " << resultat2 << std::endl;

  return 0;
}
