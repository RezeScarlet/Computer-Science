#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void MergeSortRecursivo(int array[], int arraySize, int p, int r);
void IntercalaComSentinela(int array[], int p, int q, int r);

void printArray(int array[], int arraySize);

int instructions = 0;

int main() {
  printf("Aula 04 - Exercicio 02 - MergeSort Recursivo com Sentinela:\n");
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
  MergeSortRecursivo(array, arraySize, 0, arraySize - 1);
  return 0;
}

void MergeSortRecursivo(int array[], int arraySize, int p, int r) {
  int q;
  if (p < r) {
    q = (p + r) / 2;
    MergeSortRecursivo(array, arraySize, p, q);
    MergeSortRecursivo(array, arraySize, q + 1, r);
    IntercalaComSentinela(array, p, q, r);
  }

  printf("\nArray Ord.   [] = ");
  printArray(array,  arraySize);
}

void IntercalaComSentinela(int array[], int p, int q, int r) {
  int n1 = q - p + 1;
  int n2 = r - q;

  int L[n1 + 1];
  int R[n2 + 1];

  for (int i = 0; i < n1; i++) {
    L[i] = array[p + i];
  }

  for (int j = 0; j < n2; j++) {
    R[j] = array[q + j + 1];
  }

  L[n1] = __INT_MAX__;
  R[n2] = __INT_MAX__;

  int i = 0;
  int j = 0;

  for (int k = p; k <= r; k++) {
    if (L[i] <= R[j]) {
      array[k] = L[i];
      i++;
    } else {
      array[k] = R[j];
      j++;
    }
  }
}

void printArray(int array[], int arraySize) {
  for (int i = 0; i < arraySize; i++) {
    printf("%d ", array[i]);
  }
}
