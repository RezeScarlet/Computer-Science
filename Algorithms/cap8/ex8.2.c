// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>

void trocar( int *n1, int *n2 );

int main() {
	int n1;
	int n2;

	printf("N1: ");
	scanf("%d", &n1);
	printf("N2: ");
	scanf("%d", &n2);

	printf("\nAntes:\n    n1: %d\n    n2: %d", n1, n2);
	trocar(&n1, &n2);
	printf("\nDepois:\n    n1: %d\n    n2: %d", n1, n2);
	
	
	return 0;
}

void trocar( int *n1, int *n2 ) {
	int troca;
	troca = *n1;
	*n1 = *n2;
	*n2 = troca;


}