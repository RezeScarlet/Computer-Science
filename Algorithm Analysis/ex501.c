#include <stdio.h>

int RecursiveFactorial(int n);

int main() {
  int n;
  printf("Aula 06 - Exercicio 01 a - Fatorial Recursivo:\n");

  printf("Numero: ");
  scanf("%d", &n);


  printf("%d! =  %d\n", n,  RecursiveFactorial(n));
}

int RecursiveFactorial(int n) {
  if (n == 1) return 1;
  return (n * RecursiveFactorial(n - 1));
}

