#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void MergeSortIterativo(int array[], int arraySize);
void IntercalaSemSentinela(int array[], int arraySize, int p, int q, int r);

void printArray(int array[], int arraySize);

int main() {
  printf("Aula 04 - Exercicio 04 - MergeSort Iterativo sem Sentinela:\n");
  printf("Entre com o tamanho do Array de Inteiros: ");

  int instructions = 0;

  int arraySize;
  scanf("%d", &arraySize);

  int array[arraySize];

  srand(time(NULL));
  for (int i = 0; i < arraySize; i++) {
    array[i] = rand() % 100;
  }

  printf("\nOrdenacao\n");
  MergeSortIterativo(array, arraySize);
  return 0;
}

void MergeSortIterativo(int array[], int arraySize) {
  int p, r, b;
  b = 1;
  while (b < arraySize) {
    p = 0;
    while (p + b < arraySize) {
      r = p + 2 * b - 1;
      if (r >= arraySize) {
        r = arraySize - 1;
      }
      IntercalaSemSentinela(array, arraySize, p, p + b - 1, r);
      printf("\nArray Ord.   [] = ");
      printArray(array, arraySize);
      p = p + 2 * b;
    }
    b *= 2;
  }
}
void IntercalaSemSentinela(int array[], int arraySize, int p, int q, int r) {
  int B[arraySize];
  for (int i = p; i <= q; i++) {
    B[i] = array[i];
  }
  for (int i = q + 1; i <= r; i++) {
    B[r + q + 1 - i] = array[i];
  }
  int i = p;
  int j = r;
  for (int k = p; k <= r; k++) {
    if (B[i] <= B[j]) {
      array[k] = B[i];
      i++;
    } else {
      array[k] = B[j];
      j--;
    }
  }
}

void printArray(int array[], int arraySize) {
  for (int i = 0; i < arraySize; i++) {
    printf("%d ", array[i]);
  }
}
