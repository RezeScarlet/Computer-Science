#include <stdio.h>

int IterativeFibonacci(int n);

int main() {
  int n;
  printf("Aula 06 - Exercicio 01 f - Fibonacci Iterativo:\n");

  printf("Numero: ");
  scanf("%d", &n);

  printf("Fib(%d) =  %d\n", n, IterativeFibonacci(n));
}

int IterativeFibonacci(int n) {
  int a = 0;
  int b = 1;
  int c;
  if (n == 0)
    return 0;
  for (int i = 2; i <= n; i++) {
    c = a + b;
    a = b;
    b = c;
  }
  return b;
}
