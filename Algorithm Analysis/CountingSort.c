#include <stdio.h>

// Funções para Counting Sort
void countingSort(int array[], int arraySize);
void printArray(int array[], int arraySize);

int main() {
  printf("======= Counting Sort =======\n");
  printf("Tamanho do Array de Inteiros: ");

  int arraySize;
  scanf("%d", &arraySize);

  int array[arraySize];

  for (int i = 0; i < arraySize; i++) {
    printf("Item %d do Array: ", i + 1);
    scanf("%d", &array[i]);
  }

  printf("\nOrdenação:\n");
  countingSort(array, arraySize);
  return 0;
}

void countingSort(int array[], int arraySize) {
  int maxValue = array[0];
  for (int i = 1; i < arraySize; i++) {
    if (array[i] > maxValue) {
      maxValue = array[i];
    }
  }

  int count[maxValue + 1];
  for (int i = 0; i <= maxValue; i++) {
    count[i] = 0;
  }

  for (int i = 0; i < arraySize; i++) {
    count[array[i]]++;
  }

  for (int i = 1; i <= maxValue; i++) {
    count[i] += count[i - 1];
  }

  printf("\nCount   .[] = ");
  printArray(count, maxValue);

  int output[arraySize];
  for (int i = arraySize - 1; i >= 0; i--) {
    output[count[array[i]] - 1] = array[i];
    count[array[i]]--;
  }

  for (int i = 0; i < arraySize; i++) {
    array[i] = output[i];
  }

  printf("\nArray Ord.   [] = ");
  printArray(array, arraySize);
}

void printArray(int array[], int arraySize) {
  for (int i = 0; i < arraySize; i++) {
    printf("%d ", array[i]);
  }
}
