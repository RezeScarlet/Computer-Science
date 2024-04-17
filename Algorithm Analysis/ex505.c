#include <stdio.h>

int RecursiveFibonacci(int n);

int main() {
  int n;
  printf("Aula 06 - Exercicio 01 e - Fibonacci Recursivo:\n");

  printf("Numero: ");
  scanf("%d", &n);

  printf("Fib(%d) =  %d\n", n, RecursiveFibonacci(n));
}

int RecursiveFibonacci(int n) {
  if (n <= 1)
    return n;
  return (RecursiveFibonacci(n - 1) + RecursiveFibonacci(n - 2));
}
