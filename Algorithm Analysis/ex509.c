#include <stdio.h>

int Max(int array[], int tamanho);

int main() {
  int arraySize;
  int n;
  int index;
  printf("Aula 06 - Exercicio 02 c - Max:\n");
  printf("Entre com o tamanho do Array de Inteiros: ");

  scanf("%d", &arraySize);

  int array[arraySize];

  for (int i = 0; i < arraySize; i++) {
    printf("Valor %d: ", i + 1);
    scanf("%d", &array[i]);
  }

  index = Max(array, arraySize - 1);
  printf("O maior valor foi encontrado na posicao %d do Array!\n", index + 1);

  return 0;
}

int Max(int array[], int tamanho) {
  if (tamanho == 1) {
    return array[0];
  } else {
    int max_restante = Max(array + 1, tamanho - 1);
    return (array[0] > max_restante) ? array[0] : max_restante;
  }
}

