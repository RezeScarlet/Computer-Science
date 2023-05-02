// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>

int main() {
	int valor;
	int ocorrencias = 0;
	int array[5];

	for (int i = 0; i < 5; i++) {
		printf("array[%d]: ", i);
		scanf("%d", &array[i]);

	}
	printf("Buscar por: ");
	scanf("%d", &valor);
	
	for (int i = 0; i < 5; i++) {
		if (valor == array[i]) {
			ocorrencias += 1;

		}
	}
	if (ocorrencias == 0) {
		printf("O array nao contem o valor %d.", valor);
		
	} else if (ocorrencias == 1) {
				printf("O array contem 1 ocorrencia do valor %d.", valor);

	}	else {
		printf("O array contem %d ocorrencias do valor %d.", ocorrencias, valor);

	}
	
	
	
	return 0;
}