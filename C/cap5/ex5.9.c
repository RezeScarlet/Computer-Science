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

		int array[valor][valor];

		for (int i = 0; i < valor; i++) {
			
		}
		
		
		printf("\n");
		
		for (int i = 0; i < valor; i++) {
			for (int j = 0; j < valor; j++) {
				printf("%3d", array[i][j]);
				if (j != valor-1) {
					printf(" ");
					
				}
				
				
			}
			printf("\n");
			
		}		
	}
	
	
	return 0;
}