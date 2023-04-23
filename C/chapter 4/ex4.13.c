// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>

int main() {
	int array[10] = {};
	int posicao = -1;

	for (int i = 0; i < 10; i++) {
		printf("array[%d]: ", i);
		scanf("%d", &array[i]);
		
	}

	while (posicao < 0 || posicao > 9) {
		printf("Posicao a ser removida (0 a 9): ");
		scanf("%d", &posicao);

		if (posicao > 0 || posicao > 9) {
			printf("Posicao invalida, forneca novamente!\n");

		}
	}

	for (int i = posicao; i < 10; i++) {
		array[i] = array[i+1];

	}
	for (int i = 0; i < 9; i++) {
		printf("array[%d] = %d\n", i, array[i]);
	
	}
	
	return 0;
}