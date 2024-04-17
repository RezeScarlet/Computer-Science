#include <stdio.h>

int mdc(int a, int b);

int main() {
  int a;
  int b;
  printf("Aula 06 - Exercicio 02 b - MDC:\n");

  printf("Numero 1: ");
  scanf("%d", &a);
  printf("Numero 2: ");
  scanf("%d", &b);

  printf("MDC de %d e %d = %d\n", a, b, mdc(a, b));
}

int mdc(int a, int b) {
  if (b == 0)
    return a;
  else
    return (mdc(b, a % b));
}
