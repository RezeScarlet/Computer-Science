#include <stdio.h>

int Exponential(int n);

int main() {
  int n;
  printf("Aula 06 - Exercicio 02 a - Exponencial:\n");

  printf("Numero: ");
  scanf("%d", &n);

  printf("2^%d = %d\n", n, Exponential(n));
}

int Exponential(int n) {
  if (n == 0)
    return 1;
  return (2 * Exponential(n - 1));
}
