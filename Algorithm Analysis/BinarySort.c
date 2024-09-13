
#include <stdio.h>

void sort(int array[], int arraySize);

void printArray(int array[], int arraySize);

int main() {
  printf("======= Binary Sort =======\n");
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
    int L = 0;
    int R = i;
    while (L < R) {
      int m = (L + R) / 2;
      if (key >= array[m]) {
        L = m + 1;

      }
      else {
        R = m;

      }
    }
    for (j = i; j > L; j--) {
      array[j] = array[j - 1];
    }
    array[R] = key;
  }

  printf("\nArray Ord.   [] = ");
  printArray(array, arraySize);
}

void printArray(int array[], int arraySize) {
  for (int i = 0; i < arraySize; i++) {
    printf("%d ", array[i]);
  }
}
