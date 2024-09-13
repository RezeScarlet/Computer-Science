#include <stdio.h>

void sort(int array[], int arraySize);

void printArray(int array[], int arraySize);

int main() {
  printf("======= Select Sort =======\n");
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
  int i, j, k, x, Comp;
  for (i = 0; i < arraySize - 1; i++) {
    Comp = 0;
    k = i;
    x = array[i];
    printf("\nArray Desord.[] = ");
    printArray(array, arraySize);
    printf("- %d", array[i]);
    for (j = i + 1; j < arraySize; j++) {
      if (array[j] < x) {
        k = j;
        x = array[k];
        Comp = 1;
      }
    }
    if (Comp == 1) {
      array[k] = array[i];
      array[i] = x;
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
