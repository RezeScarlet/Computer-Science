// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>

int main() {
	int valor;
		
	printf("Numero entre 1 e 100: ");
	scanf("%d", &valor);

	if (valor <= 0 || valor > 100) {
		printf("Numero incorreto!");
		
	} else {
		printf("\ncomeço\n");
		
		for (int i = 0; i < valor; i++) {
			for (int j = 0; j < valor; j++) {
				printf("  1 ");
				
			}
			printf("\n");
			
		}
		printf("\nfim\n");
		
	}
	
	
	return 0;
}