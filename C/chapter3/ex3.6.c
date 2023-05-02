// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>

int main() {
  int
  n;

  printf("Forneca um numero maior ou igual a zero: ");
  scanf("%d", &n);
  
  if (n<0) {
    printf("Valor incorreto (negativo)");
  } else {
    for (int i = n; i > -1; i--)
    {
      printf("%d ", i);
      
    }
  }
  
  
  return 0;
}