#include <stdio.h>

void sort(int array[], int arraySize);

void printArray(int array[], int arraySize);

int main() {
  printf("======= Bubble Sort =======\n");
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
  int aux, i, j;
  for (j = arraySize - 1; j >= 1; j--) {
    for (i = 0; i < j; i++) {
    printf("\nArray Desord.[] = ");
    printArray(array, arraySize);
    printf("- %d", array[i]);
      if (array[i] > array[i + 1]) {
        aux = array[i];
        array[i] = array[i + 1];
        array[i + 1] = aux;
      }
    }
  }
  printf("\nArray Ord.   [] = ");
  printArray(array, arraySize);
}

void printArray(int array[], int arraySize) {
  for (int i = 0; i < arraySize; i++) {
    printf("%d ", array[i]);
  }
}
