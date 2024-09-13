#include <stdio.h>

void Heap(int L, int R, int Vet[]);
void sort(int array[], int arraySize);
void printArray(int array[], int arraySize);

int main() {
  printf("======= Heap Sort =======\n");
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

void Heap(int L, int R, int Vet[]) {
  int i, j, x;
  i = L;
  j = 2 * L;
  x = Vet[L];
  if ((j < R) && (Vet[j] < Vet[j + 1]))
    j++;
  while ((j <= R) && (x < Vet[j])) {
    Vet[i] = Vet[j];
    i = j;
    j = 2 * j;
    if ((j < R) && (Vet[j] < Vet[j + 1]))
      j++;
  }
  Vet[i] = x;
}
void sort(int array[], int arraySize) {
  int L, R, x;
  L = arraySize / 2 + 1;
  R = arraySize - 1;
  while (L > 0) {
    L--;
    Heap(L, R, array);
  }
  while (R > 0) {
    x = array[0];
    printf("\nArray Desord.[] = ");
    printArray(array, arraySize);
    array[0] = array[R]; array[R] = x;
    R--;
    Heap(L, R, array);
  }
  printf("\nArray Ord.   [] = ");
  printArray(array, arraySize);
}

void printArray(int array[], int arraySize) {
  for (int i = 0; i < arraySize; i++) {
    printf("%d ", array[i]);
  }
}
