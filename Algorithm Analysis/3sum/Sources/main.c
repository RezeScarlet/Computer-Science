
#include "../Headers/threesum.h"
#include <stdio.h>
#include <stdlib.h>

/* Variáveis Globais */
int *A;

int main() {
  int n;
  printf("\n ---Projeto 01 - 3SUM--- \n");

  // printf("\nDefinir o tamanho do Array: ");
  // scanf("%d", &n);
  n = 8;

  A = (int *)malloc(n * sizeof(int));
  int DEBUG_ARRAY[8] = {30, -40, -20, -10, 40, 0, 10, 5};
  for (int i = 0; i < n; i++) {
    // printf("Entre com o %d elemento do Array: ", i+1);
    // scanf("%d", &A[i]);
    A[i] = DEBUG_ARRAY[i];
  }

  ImprimeArray(A, "Array Infor.   []", n);
  treeSumForcaBruta(A, n);
  treeSumMelhorado(A, n);

  ImprimeQtdOperacoes();

  return 0;
}
