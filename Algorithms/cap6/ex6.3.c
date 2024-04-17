// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	float n;

	printf("Numero: ");
	scanf("%f", &n);

	printf("\nMaior inteiro mais proximo: %.2f", ceil(n));
	printf("\nMenor inteiro mais proximo: %.2f", floor(n));
	
	
	
	return 0;
}