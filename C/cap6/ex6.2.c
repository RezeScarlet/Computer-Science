// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	float n1;
	float n2;

	printf("Base: ");
	scanf("%f", &n1);
	printf("Expoente: ");
	scanf("%f", &n2);

	printf("%.2f ^ %.2f = %.2f", n1, n2, pow(n1, n2));
	
	
	return 0;
}