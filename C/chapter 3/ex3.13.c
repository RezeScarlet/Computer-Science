// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>

int main() {
  int
  n1,
  n2,
  divP2 = 0,
	divP3 = 0,
	divP4 = 0;
  
  printf("N1: ");
  scanf("%d", &n1);
  printf("N2: ");
  scanf("%d", &n2);
  
  if (n1 <= n2) {
		int menor = n1;
		n1 = n2;
		n2 = menor;    
  }

	for (int i = n1; i > n2-1; i--) {
		if (i % 2 == 0) {
			divP2++;
		} 
		if (i % 3 == 0) {
			divP3++;
		}      
		if (i % 4 == 0) {
			divP4++;
		}
		
	}

  printf("Multiplos de 2: %d\n", divP2);
	printf("Multiplos de 3: %d\n", divP3);
	printf("Multiplos de 4: %d\n", divP4);
  
  return 0;
}