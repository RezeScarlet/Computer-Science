#include <stdio.h>

void sort(int array[], int arraySize);

void printArray(int array[], int arraySize);

int main() {
  printf("======= Radix Sort =======\n");
  printf("Tamanho do Array de Inteiros: ");

  int arraySize;
  scanf("%d", &arraySize);

  int array[arraySize];

  for (int i = 0; i < arraySize; i++) {
    printf("Item %d do Array: ", i + 1);
    scanf("%d", &array[i]);
  }

  printf("\nOrdenação:\n");
  sort(array, arraySize);
  return 0;
}

void sort(int array[], int arraySize) {
  int i, b[arraySize], m = 0, exp = 1;
  for (i = 0; i < arraySize; i++) {
    if (array[i] > m)
      m = array[i];
  }
  while (m / exp > 0) {
    printf("\nArray Desord.[] = ");
    printArray(array, arraySize);
    int bucket[10] = {0};
    for (i = 0; i < arraySize; i++)
      bucket[array[i] / exp % 10]++;
    for (i = 1; i < 10; i++)
      bucket[i] += bucket[i - 1];
    for (i = arraySize - 1; i >= 0; i--)
      b[--bucket[array[i] / exp % 10]] = array[i];
    for (i = 0; i < arraySize; i++)
      array[i] = b[i];
    exp *= 10;
  }

  printf("\nArray Ord.   [] = ");
  printArray(array, arraySize);
}

void printArray(int array[], int arraySize) {
  for (int i = 0; i < arraySize; i++) {
    printf("%d ", array[i]);
  }
}
