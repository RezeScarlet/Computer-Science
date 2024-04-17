#include <stdio.h>

void maxMin1(int numbers[], int n, int max, int min);
void maxMin2(int numbers[], int n, int max, int min);
void maxMin3(int numbers[], int n, int max, int min);

int main() {
  int arraySize;
  int op = 0;
  int largestNumber = 0;

  printf("Aula 03 - Exercicio 02 - Maior Menor Elemento no Array: \n");
  printf("Entre com o tamanho do array de inteiros: ");
  scanf("%d", &arraySize);

  int array[arraySize];

  for (int i = 0; i < arraySize; i++) {
    printf("Digite o valor para a posicao %d do array: ", i + 1);
    scanf("%d", &array[i]);
  }

  maxMin1(array, arraySize, 0, 0);
  maxMin2(array, arraySize, 0, 0);
  maxMin3(array, arraySize, 0, 0);
}

void maxMin1(int numbers[], int n, int max, int min) {
  int operations = 0;
  max = numbers[0];
  min = numbers[0];
  for (int i = 1; i < n; i++) {
    operations++;
    if (numbers[i] > max) {
      max = numbers[i];
    }
    operations++;
    if (numbers[i] < min) {
      min = numbers[i];
    }
  }
  printf("maxMin1() - Maior Elemento: %d - Menor Elemento: %d (Num. de "
         "operacoes: %d)\n",
         max, min, operations);
}
void maxMin2(int numbers[], int n, int max, int min) {
  int operations = 0;
  max = numbers[0];
  min = numbers[0];
  for (int i = 1; i < n; i++) {
      operations++;
    if (numbers[i] > max) {
      max = numbers[i];
    } else {
      if (numbers[i] < min) {
        min = numbers[i];
      }
    }
  }
  printf("maxMin2() - Maior Elemento: %d - Menor Elemento: %d (Num. de "
         "operacoes: %d)\n",
         max, min, operations);
}

void maxMin3(int numbers[], int n, int max, int min) {
  int operations = 0;
  if (n % 2 != 0) {
    numbers[n + 1] = numbers[n];
    n += 1;
  }
  max = numbers[1];
  min = numbers[0];
  operations++;
  if (numbers[0] > numbers[1]) {
    max = numbers[0];
    min = numbers[1];
  }

  for (int i = 2; i < n; i += 2) {
    operations++;
    if (numbers[i] > numbers[i + 1]) {
      operations++;
      if (numbers[i] > max) {
        max = numbers[i];
      }
      operations++;
      if (numbers[i + 1] < min) {
        min = numbers[i + 1];
      }

    } else {
      operations++;
      if (numbers[i + 1] > max) {
        max = numbers[i + 1];
      }
      operations++;
      if (numbers[i] < min) {
        min = numbers[i];
      }
    }
  }
  printf("maxMin3() - Maior Elemento: %d - Menor Elemento: %d (Num. de "
         "operacoes: %d)\n",
         max, min, operations);
}
