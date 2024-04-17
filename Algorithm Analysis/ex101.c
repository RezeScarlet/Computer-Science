#include <stdio.h>

int max(int numbers[], int n, int *op);

int main() {
  int arraySize;
  int op = 0;
  int largestNumber = 0;

  printf("Aula 02 - Exercicio 01 - Maior Elemento no Array: \n");
  printf("Entre com o tamanho do array de inteiros: ");
  scanf("%d", &arraySize);

  int array[arraySize];

  for (int i = 0; i < arraySize; i++) {
    printf("Digite o valor para a posicao %d do array: ", i+1);
    scanf("%d", &array[i]);
  }

  largestNumber = max(array, arraySize, &op);

  printf("O maior elemento do array eh: %d (Operacoes: %d)", largestNumber, op);
}
int max(int numbers[], int n, int *op) {
  int max = numbers[0];

  for (int i = 1; i < n; i++) {
    (*op)++;
    if (max < numbers[i]) {
      max = numbers[i];
    }
  }

  return max;
}
