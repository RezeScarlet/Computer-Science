// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>

int main() {
  int
  n1,
  n2,
  quant = 0;
  
  printf("N1: ");
  scanf("%d", &n1);
  printf("N2: ");
  scanf("%d", &n2);
  
  if (n1 <= n2) {

    for (int i = n1; i < n2+1; i++) {
      if (i%2==0) {
        quant++;
      }    
    }

    printf("Numeros pares entre %d e %d: %d", n1, n2, quant);
    
  } else if (n1 >= n2) {

    for (int i = n1; i > n2-1; i--) {
      if (i%2==0) {
        quant++;
      }      
    }

    printf("Numeros pares entre %d e %d: %d", n2, n1, quant);
  } 
  
  return 0;
}