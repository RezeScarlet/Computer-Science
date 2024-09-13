#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void MergeSortRecursivo(int array[], int arraySize, int p, int r);
void IntercalaSemSentinela(int array[], int arraySize, int p, int q, int r);

void printArray(int array[], int arraySize);

int main() {
  printf("======= Merge Sort =======\n");
  printf("Tamanho do Array de Inteiros: ");
  int arraySize;
  scanf("%d", &arraySize);

  int array[arraySize];

  for (int i = 0; i < arraySize; i++) {
    printf("Item %d do Array: ", i + 1);
    scanf("%d", &array[i]);
  }

  printf("\nOrdenação:\n");
  MergeSortRecursivo(array, arraySize, 0, arraySize - 1);
  printf("\nArray Ord.   [] = ");
  printArray(array, arraySize);
  return 0;
}

void MergeSortRecursivo(int array[], int arraySize, int p, int r) {
  int q;
  if (p < r) {
    q = (p + r) / 2;
    MergeSortRecursivo(array, arraySize, p, q);
    MergeSortRecursivo(array, arraySize, q + 1, r);
    IntercalaSemSentinela(array, arraySize, p, q, r);
  }

  printf("\nArray Des.   [] = ");
  printArray(array, arraySize);
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

