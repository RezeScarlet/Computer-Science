// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>

int main() {
	int valor;
	int array[5];

	for (int i = 0; i < 5; i++) {
		printf("array[%d]: ", i);
		scanf("%d", &array[i]);

	}
	printf("Buscar por: ");
	scanf("%d", &valor);
	
	for (int i = 0; i < 5; i++) {
		if (valor == array[i]) {
			printf("Indice %d: ACHEI\n", i);

		} else {
			printf("Indice %d: NAO ACHEI\n", i);
			 
		}
	}
	
	return 0;
}