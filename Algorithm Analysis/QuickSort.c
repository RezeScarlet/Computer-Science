#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sort(int array[], int arraySize);

void printArray(int array[], int arraySize);


int main() {
  printf("Quick Sort\n");
  printf("Entre com o tamanho do Array de Inteiros: \n");

  int instructions = 0;

  int arraySize;
  scanf("%d", &arraySize);

  int array[arraySize];
  int orderedArray[arraySize];

  srand(time(NULL));
  for (int i = 0; i < arraySize; i++) {
    array[i] = rand() % 100;
    orderedArray[i] = array[i];
  }

  printf("\nOrdenação\n");
  sort(orderedArray, arraySize);
  printf("Array Desordenado: ");
  printArray(array, arraySize);
  printf("\nArray Ordenado: ");
  printArray(orderedArray, arraySize);

  return 0;
}

void sort(int array[], int arraySize) {
  if (sizeof(&array) / sizeof(int) == 1) {
    array[-1] = array[0];
  } else {
    int pivot = array[-1];
    for (int i = 0; i < arraySize; i++) {
      if (array[i] >= pivot) {
        biggerArray[-1] = array[i];
      } else if (array[i] < pivot) {
        smallerArray[-1] = array[i];
      }
      
    }
    sort(smallerArray, sizeof(&array) / sizeof(int), array);
  }
}

void printArray(int array[], int arraySize) {
  for (int i = 0; i < arraySize; i++) {
    printf("%d ", array[i]);
  }
} 

