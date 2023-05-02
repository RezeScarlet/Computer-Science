// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>

int main() {
	int array[5];
	int cont = 5;
	
	for (int i = 0; i < 5; i++) {
		printf("array[%d]: ", i);
		scanf("%d", &array[i]);
	}

	printf("Numeros pares:");
	for (int i = 0; i < 5; i++) {
		if (array[i] % 2 == 0) {
			printf(" %d", array[i]);
			cont--;
						 
		}
	}
	if (cont == 5) {
		printf(" nao ha");
		
	}
	printf(".\n");
	cont = 5;
	
	printf("Numeros impares:");
	for (int i = 0; i < 5; i++) {
		if (array[i] % 2 != 0) {
			printf(" %d", array[i]);
			cont--;

		}
	}
	if (cont == 5) {
	printf(" nao ha");
	
	}
	printf(".");
	
	
	return 0;
}