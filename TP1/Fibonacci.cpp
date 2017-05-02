#include <iostream>
#include "Fibonacci.hpp"

int fibonacciRecursif(int nb){
  if (nb==0){
    return 0;
  }else{
    if(nb ==1){
      return 1;
    }else{
      int resultat;
      resultat = fibonacciRecursif(nb-1) + fibonacciRecursif(nb-2);
      return resultat;
    }
  }
}

int fibonacciIteratif(int nb){
  if (nb==0){
    return 0;
  }else{
    if(nb==1){
      return 1;
    }else{
      int tab[] = {0,1};
      int temp;
      int cpt = 1;
      while (cpt != nb){
	temp = tab[0];
	tab[0]=tab[1];
	tab[1] = tab[1] + temp;
	cpt++;
      }
      return tab[1];
    }
  }
}
