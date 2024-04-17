#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void MergeSortRecursivo(int array[], int arraySize, int p, int r);
void IntercalaSemSentinela(int array[], int arraySize, int p, int q, int r);
int BuscaBinariaRecursiva(int array[], int p, int r, int n);
void printArray(int array[], int arraySize);

int instructions = 0;

int main() {
  int arraySize;
  int n;
  int index;
  printf("Aula 04 - Exercicio 05 - Busca Binaria:\n");
  printf("Entre com o tamanho do Array de Inteiros: ");

  scanf("%d", &arraySize);

  int array[arraySize];

  srand(time(NULL));
  for (int i = 0; i < arraySize; i++) {
    array[i] = rand() % 100;
  }

  MergeSortRecursivo(array, arraySize, 0, arraySize - 1);
  printf("\nArray Gerado Ordenado: ");
  printArray(array, arraySize);
  printf("\nEntre com o valor inteiro a ser procurado: ");
  scanf("%d", &n);

  index = BuscaBinariaRecursiva(array, 0, arraySize - 1, n);
  if (index >= 0) {
    printf("O Valor %d foi encontrado na posicao %d do Array!", n, index);

  } else {
    printf("O Valor %d nao foi encontrado no Array!", n);
  }
  return 0;
}

void MergeSortRecursivo(int array[], int arraySize, int p, int r) {
  int q;
  if (p < r) {
    q = (p + r) / 2;
    MergeSortRecursivo(array, arraySize, p, q);
    MergeSortRecursivo(array, arraySize, q + 1, r);
    IntercalaSemSentinela(array, arraySize, p, q, r);
  }
}

void IntercalaSemSentinela(int array[], int arraySize, int p, int q, int r) {
  int B[arraySize];
  for (int i = p; i <= q; i++) {
    B[i] = array[i];
  }
  for (int i = q + 1; i <= r; i++) {
    B[r + q + 1 - i] = array[i];
  }
  int i = p;
  int j = r;
  for (int k = p; k <= r; k++) {
    if (B[i] <= B[j]) {
      array[k] = B[i];
      i++;
    } else {
      array[k] = B[j];
      j--;
    }
  }
}

int BuscaBinariaRecursiva(int array[], int p, int r, int n) {
  if (p <= r) {
    int q = (p + r) / 2;

    if (array[q] == n) {
      return q;
    }

    if (array[q] > n) {
      return BuscaBinariaRecursiva(array, p, q - 1, n);
    }

    return BuscaBinariaRecursiva(array, q + 1, r, n);
  }

  return -1;
}

void printArray(int array[], int arraySize) {
  for (int i = 0; i < arraySize; i++) {
    printf("%d ", array[i]);
  }
}

