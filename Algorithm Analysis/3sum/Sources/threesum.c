#include "../Headers/threesum.h"
#include <stdio.h>
#include <stdlib.h>

int qtdOperacoes3SumFB = 0;
int qtdOperacoes3SumMelhorado = 0;

/* treeSumForcaBruta(): */
void treeSumForcaBruta(int A[], int n) {
  printf("\n ---3SUM - Forca Bruta:--- \n\n");
  int cont = 0;
  for (int i = 0; i < n - 2; i++) {
    for (int j = i + 1; j < n - 1; j++) {
      for (int k = j + 1; k < n; k++) {
        qtdOperacoes3SumFB++;
        if (A[i] + A[j] + A[k] == 0) {
          cont++;
          printf("%d Tripla Encontrada: [%d, %d, %d]\n", cont, A[i], A[j], A[k]);
        }
      }
    }
  }
  printf("Total Triplas Encontradas pela Forca Bruta: %d\n", cont);
}

/* treeSumMelhorado(): */
void treeSumMelhorado(int A[], int n) {
  printf("\n ---3SUM - Melhorado:--- \n");
  MergeSortRecursivo(A, 0, n - 1, n);
  ImprimeArray(A, "Array Ord.   []", n);
  int cont = 0;
  for (int i = 0; i < n - 2; i++) {
    for (int j = i + 1; j < n - 1; j++) {
      int k = BuscaBinaria((A[i] + A[j]) * -1, A, j + 1, n - 1);
    qtdOperacoes3SumMelhorado++;

      if (k >= 0) {
        cont++;
        printf("%d Tripla Encontrada: [%d, %d, %d]\n", cont, A[i], A[j], A[k]);
      }
    }
  }
}

/* BuscaBinaria(): */
int BuscaBinaria(int x, int A[], int inicio, int fim) {
  if (inicio <= fim) {
    int meio = (inicio + fim) / 2;
    if (A[meio] == x) {


      return meio;
    }

    if (A[meio] > x) {
      return BuscaBinaria(x, A, inicio, meio - 1);
    }

    return BuscaBinaria(x, A, meio + 1, fim);
  }

  return -1;
}

/* MergeSortRecursivo(): */
void MergeSortRecursivo(int A[], int inicio, int fim, int n) {
  int meio;
  if (inicio < fim) {
    meio = (inicio + fim) / 2;
    MergeSortRecursivo(A, inicio, meio, n);
    MergeSortRecursivo(A, meio + 1, fim, n);
    IntercalaSemSentinela(A, inicio, meio, fim, n);
  }
}

/* IntercalaSemSentinela(): */
void IntercalaSemSentinela(int A[], int inicio, int meio, int fim, int n) {
  int B[n];
  for (int i = inicio; i <= meio; i++) {
    B[i] = A[i];
  }
  for (int i = meio + 1; i <= fim; i++) {
    B[fim + meio + 1 - i] = A[i];
  }
  int i = inicio;
  int j = fim;
  for (int k = inicio; k <= fim; k++) {
    qtdOperacoes3SumMelhorado++;
    if (B[i] <= B[j]) {
      A[k] = B[i];
      i++;
    } else {
      A[k] = B[j];
      j--;
    }
  }
}

/* ImprimeArray(): */
void ImprimeArray(int A[], char Msg[], int n) {
  printf("\n%s =  ", Msg);
  for (int i = 0; i < n; i++) {
    printf("%d ", A[i]);
  }
  printf("\n");
}

/* ImprimeQtdOperacoes():  */
void ImprimeQtdOperacoes() {
  printf("Quantidade de Operacoes - 3SUM - Forca Bruta: %d\n", qtdOperacoes3SumFB);
  printf("Quantidade de Operacoes - 3SUM - Melhorado: %d\n", qtdOperacoes3SumMelhorado);
}
