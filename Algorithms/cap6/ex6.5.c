// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	float n;

	printf("Numero: ");
	scanf("%f", &n);
		
	if (n < 0) {
		printf("Quadrado de %.2f: %.2f", n, pow(n, 2));
  
	} else {
		printf("Raiz quadrada de %.2f: %.2f", n, sqrt(n));
		
	}
	return 0;
}