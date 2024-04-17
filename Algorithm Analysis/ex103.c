#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sort(int array[], int arraySize);

void printArray(int array[], int arraySize);

int instructions = 0;

int main() {
  printf("Aula 02 - Exercicio 03 - Ordenacao\n");
  printf("Entre com o tamanho do Array de Inteiros: ");

  int instructions = 0;

  int arraySize;
  scanf("%d", &arraySize);

  int array[arraySize];

  srand(time(NULL));
  for (int i = 0; i < arraySize; i++) {
    array[i] = rand() % 100;
  }

  printf("\nOrdenação\n");
  sort(array, arraySize);
  return 0;
}

void sort(int array[], int arraySize) {
  for (int i = 1; i < arraySize; i++) {
    printf("\nArray Desord.[] = ");
    printArray(array, arraySize);
    printf("- %d", array[i]);
    int key = array[i];
    int j = i - 1;
    instructions++;
    while (key < array[j] && j >= 0) {
      instructions++;
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1] = key;
  }

  printf("\nNumero de Operacoes para Ordenacao: %d", instructions);
  printf("\nArray Ord.   [] = ");
  printArray(array, arraySize);
}

void printArray(int array[], int arraySize) {
  for (int i = 0; i < arraySize; i++) {
    printf("%d ", array[i]);
  }
}
