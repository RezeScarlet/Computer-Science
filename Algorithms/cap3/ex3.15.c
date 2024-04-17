// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  
  printf("numero: ");
  scanf("%d", &n);

  int fatorial = n;

  if (n < 0) {

    printf("Nao ha fatorial de numero negativo.");
  } else {
    
	for (int i = n-1; i > 1; i--) {

		fatorial *= i;
	}
  
  printf("%d! = %d\n", n, fatorial);
  }
  
  return 0;
}