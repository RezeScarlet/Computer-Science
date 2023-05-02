// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>

int main() {
  int
  n;

  printf("Forneca um numero menor ou igual a zero: ");
  scanf("%d", &n);
  
  if (n>0) {
    printf("Valor incorreto (positivo)");
  } else {
    for (int i = 0; i > n-1; i--)
    {
      printf("%d ", i);
      
    }
  }
  
  
  return 0;
}