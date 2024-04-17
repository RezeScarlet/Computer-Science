#include <stdio.h>

float harmonico(int n);

int main() {
  int n;
  printf("Aula 06 - Exercicio 02 d - Serie Harmonica:\n");
  printf("Numero: ");
  scanf("%d", &n);
  printf("O %desimo numero harmonico e: %f\n", n, harmonico(n));

  return 0;
}

float harmonico(int n) {
  if (n == 1) {
    return 1.0;
  } else {
    return harmonico(n - 1) + 1.0 / n;
  }
}
