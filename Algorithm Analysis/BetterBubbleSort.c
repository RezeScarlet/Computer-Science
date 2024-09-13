#include <stdio.h>

void sort(int array[], int arraySize);

void printArray(int array[], int arraySize);

int main() {
  printf("======= Bubble Sort Melhorado =======\n");
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
  int memoria, troca, i, j;
  troca = 1; /*A variável "troca" será a verificação da troca em cada passada*/
  for (j = arraySize - 1; (j >= 1) && (troca == 1); j--) {
    troca = 0; /*Se o valor continuar 0 na próxima passada quer dizer que não
                  houve troca e a função é encerrada.*/
    for (i = 0; i < j; i++) {
      if (array[i] > array[i + 1]) {
        printf("\nArray Desord.[] = ");
        printArray(array, arraySize);
        printf("- %d", array[i]);
        memoria = array[i];
        array[i] = array[i + 1];
        array[i + 1] = memoria;
        troca = 1; /*Se houve troca, "troca" recebe 1 para continuar rodando.*/
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
