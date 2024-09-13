#include <stdio.h>

void sort(int array[], int inicio, int fim);

void printArray(int array[], int inicio, int fim);

int main() {
  printf("======= Quick Sort =======\n");
  printf("Tamanho do Array de Inteiros: ");

  int arraySize;
  scanf("%d", &arraySize);

  int array[arraySize];

  for (int i = 0; i < arraySize; i++) {
    printf("Item %d do Array: ", i + 1);
    scanf("%d", &array[i]);
  }

  printf("\nOrdenação:\n");
  sort(array, 0, arraySize);
  printf("\nArray Ord.   [] = ");
  printArray(array, 0, arraySize);
  return 0;
}

void sort(int array[], int inicio, int fim) {

  int pivo, aux, i, j, meio;
  i = inicio;
  j = fim;
  meio = (int)((i + j) / 2);
  pivo = array[meio];
  do {
    while (array[i] < pivo)
      i = i + 1;
    while (array[j] > pivo)
      j = j - 1;
    if (i <= j) {
      aux = array[i];
      array[i] = array[j];
      array[j] = aux;
      i = i + 1;
      j = j - 1;
    }
  } while (j > i);
  printf("\nParte Des.   [] = ");
  printArray(array, inicio, fim);
  if (inicio < j)
    sort(array, inicio, j);
  if (i < fim)
    sort(array, i, fim);
}

void printArray(int array[], int inicio, int fim) {
  for (int i = inicio; i < fim; i++) {
    printf("%d ", array[i]);
  }
}
