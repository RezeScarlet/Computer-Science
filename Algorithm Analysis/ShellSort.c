#include <math.h>
#include <stdio.h>

void OrdenaShellSort(int Vet[], int Inc, int SegCorrente, int N);

void printArray(int array[], int arraySize);

int main() {
  printf("======= Shell Sort =======\n");
  printf("Tamanho do Array de Inteiros: ");

  int arraySize;
  scanf("%d", &arraySize);

  int array[arraySize];

  for (int i = 0; i < arraySize; i++) {
    printf("Item %d do Array: ", i+1);
    scanf("%d", &array[i]);
  }

  printf("\nOrdenação:\n");
  int Np = 2;
  for (int i = Np; i >= 0; i--) {

    int Inc = (int)pow(2.0, i);
    for (int SegCorrente = 0; SegCorrente < Inc; SegCorrente++) {

      OrdenaShellSort(array, Inc, SegCorrente, arraySize);
      printf("\nArray Desord.[] = ");
      printArray(array, arraySize);
    }
  }
  printf("\nArray Ord.   [] = ");
  printArray(array, arraySize);
  return 0;
}

void OrdenaShellSort(int Vet[], int Inc, int SegCorrente, int N) {

  // Variaveis Locais
  int i, j, x, k;
  for (i = (SegCorrente + Inc); i < N; i += Inc) {
    k = SegCorrente;
    j = i - Inc;
    x = Vet[i];
    while ((j >= SegCorrente) && (k == SegCorrente)) {
      if (x < Vet[j]) {
        Vet[j + Inc] = Vet[j];
        j = j - Inc;
      } else
        k = j + Inc;
    }
    Vet[k] = x;
  }
}

void printArray(int array[], int arraySize) {
  for (int i = 0; i < arraySize; i++) {
    printf("%d ", array[i]);
  }
}
