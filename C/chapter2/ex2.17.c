// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>

int main() {
  int
  n;
  printf("Entre com um valor inteiro: ");
  scanf("%d", &n);

  switch (n)
  {
  case 2:
    printf("O valor fornecido foi %d.", n);
    break;
  case 4:
    printf("O valor fornecido foi %d.", n);
    break;
  case 6:
    printf("O valor fornecido foi %d.", n);
    break;
  case 8:
    printf("O valor fornecido foi %d.", n);
    break;
  default:
    printf("Valor invalido.");
    break;
  }
  
  return 0;
}