#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int linearSearch(int array[], int arraySize, int value);

void printArray(int array[], int arraySize);

int instructions = 0;

int main() {
  int instructions = 0;
  int arraySize;
  int value;
  int position;

  printf("Aula 03 - Exercicio 03 - Busca Linear:\n");

  printf("Entre com o tamanho do Array de Inteiros: ");
  scanf("%d", &arraySize);

  int array[arraySize];

  srand(time(NULL));
  for (int i = 0; i < arraySize; i++) {
    array[i] = rand() % 100;
  }

  printf("Array Gerado = ");
  printArray(array, arraySize);

  printf("\nEntre com o valor inteiro a ser procurado: ");
  scanf("%d", &value);
  position = linearSearch(array, arraySize, value);
  if (position >= 0) {
    printf("O valor %d foi encontrado na posicao %d", value, position);

  } else {
    printf("Valor nao encontrado no array!\n");
  }
  return 0;
}

int linearSearch(int array[], int arraySize, int value) {
  for (int i = 1; i < arraySize; i++) {
    if (array[i] == value) {
      return i + 1;
    }
  }
  return -1;
}

void printArray(int array[], int arraySize) {
  for (int i = 0; i < arraySize; i++) {
    printf("%d ", array[i]);
  }
}
