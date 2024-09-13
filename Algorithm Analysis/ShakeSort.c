#include <stdio.h>

void sort(int array[], int arraySize);

void printArray(int array[], int arraySize);

int main() {
  printf("======= Shake Sort =======\n");
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
  int L = 0, R = arraySize - 1, k = arraySize - 1;
  int j, x;
  do {
    // Caminhando da Esquerda para a Direita no arrayor
    for (j = L; j < R; j++) {
      if (array[j] > array[j + 1]) {
        x = array[j];
        array[j] = array[j + 1];
        array[j + 1] = x;
        k = j;
        printf("\nArray Desord.[] = ");
        printArray(array, arraySize);
      }
    }
    R = k;
    // Caminhando da Direita para a Esquerda no arrayor
    for (j = R; j > L; j--) {
      if (array[j - 1] > array[j]) {
        x = array[j - 1];
        array[j - 1] = array[j];
        array[j] = x;
        k = j;
        printf("\nArray Desord.[] = ");
        printArray(array, arraySize);
      }
    }
    L = k;
  } while (L < R);

  printf("\nArray Ord.   [] = ");
  printArray(array, arraySize);
}

void printArray(int array[], int arraySize) {
  for (int i = 0; i < arraySize; i++) {
    printf("%d ", array[i]);
  }
}
