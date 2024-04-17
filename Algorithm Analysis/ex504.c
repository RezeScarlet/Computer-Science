#include <stdio.h>

int BuscaBinariaRecursiva(int array[], int p, int r, int n);

int main() {
  int arraySize;
  int n;
  int index;
  printf("Aula 06 - Exercicio 01 d - Busca Binaria:\n");
  printf("Entre com o tamanho do Array de Inteiros: ");

  scanf("%d", &arraySize);

  int array[arraySize];

  for (int i = 0; i < arraySize; i++) {
    printf("Valor %d: ", i + 1);
    scanf("%d", &array[i]);
  }

  printf("\nEntre com o valor inteiro a ser procurado: ");
  scanf("%d", &n);

  index = BuscaBinariaRecursiva(array, 0, arraySize - 1, n);
  if (index >= 0) {
    printf("O Valor %d foi encontrado na posicao %d do Array!\n", n, index + 1);

  } else {
    printf("O Valor %d nao foi encontrado no Array!\n", n);
  }
  return 0;
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

