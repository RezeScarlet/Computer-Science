// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>

int main() {
  int
  n;
  
  printf("Tabuada do Numero:");
  scanf("%d", &n);
  
  for (int i = 0; i < 11; i++) {
    printf("%d x %d = %d\n", n, i, n*i);
    
  }
  
  return 0;
}