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

  // Variaveis Locais
  double h = arraySize;
  int x, i, Troca;
  do {
    h = h / 1.3;
    if ((h == 9) || (h == 10))
      h = 11;
    Troca = 0;
    for (i = 0; i < (arraySize - h); i++) {
      if (array[(int)i] > array[(int)(i + h)]) {
        printf("\nArray Desord.[] = ");
        printArray(array, arraySize);
        printf("- %d", array[i]);
        x = array[i];
        array[(int)i] = array[(int)(i + h)];
        array[(int)(i + h)] = x;
        Troca = 1;
      }
    }
  } while ((Troca == 1) || (h >= 1));

  printf("\nArray Ord.   [] = ");
  printArray(array, arraySize);
}

void printArray(int array[], int arraySize) {
  for (int i = 0; i < arraySize; i++) {
    printf("%d ", array[i]);
  }
}
