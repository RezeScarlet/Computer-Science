#include <stdio.h>

void sort(int array[], int arraySize);

void printArray(int array[], int arraySize);

int main() {
  printf("======= Insertion Sort =======\n");
  printf("Tamanho do Array de Inteiros: ");

  int arraySize;
  scanf("%d", &arraySize);

  int array[arraySize];

  for (int i = 0; i < arraySize; i++) {
    printf("Item %d do Array: ", i+1);
    scanf("%d", &array[i]);
  }

  printf("\nOrdenação:\n");
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
    while (key < array[j] && j >= 0) {
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1] = key;
  }

  printf("\nArray Ord.   [] = ");
  printArray(array, arraySize);
}

void printArray(int array[], int arraySize) {
  for (int i = 0; i < arraySize; i++) {
    printf("%d ", array[i]);
  }
}
