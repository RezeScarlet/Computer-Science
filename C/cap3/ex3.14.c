// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>

int main() {
  int
  n1,
  n2,
	somatorio = 0;
  
  printf("N1: ");
  scanf("%d", &n1);
  printf("N2: ");
  scanf("%d", &n2);
  
  if (n1 > n2) {
		int maior = n1;
		n1 = n2;
		n2 = maior;    
  }

	for (int i = n2; i > n1-1; i--) {
		somatorio+=i;    
		
	}

  printf("Somatorio entre %d e %d: %d\n", n1, n2, somatorio);

  
  return 0;
}