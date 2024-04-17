#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ehPrimo(int num);

int operacoes = 0;

int main() {
  int numero;

  printf("Aula 02 - Exercicio 02 - Primalidade: \n");

  srand(time(NULL));
  numero = rand() % 100;

  printf("Numero inteiro gerado aleatoriamente (1-100): %d", numero);

  if (ehPrimo(numero) == 1) {
    printf("\nO numero %d eh Primo! (Operacoes = %d)", numero, operacoes);
  } else {
    printf("\nO numero %d nao eh Primo! (Operacoes = %d)", numero, operacoes);
  }
  return 0;
}

int ehPrimo(int num) {
  int primo = 1;

  for (int i = 2; i <= num / 2; i++) {
    operacoes++;
    if ((num % i) == 0) {
      primo = 0;
      break;
    }
  }
  return primo;
}
