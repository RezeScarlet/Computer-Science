#include <stdio.h>

int IterativeFactorial(int n);

int main() {
  int n;
  printf("Aula 06 - Exercicio 01 b - Fatorial Iterativo:\n");

  printf("Numero: ");
  scanf("%d", &n);


  printf("%d! =  %d\n", n,  IterativeFactorial(n));
}

int IterativeFactorial(int n) {
  for (int i = n - 1; i > 1; i--) {
    n = n * i;
  
  }
  return n;
}

