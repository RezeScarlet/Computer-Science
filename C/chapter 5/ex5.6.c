// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>

int main() {
	int matriz[2][3];
	int matrizT[3][2];

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("array[%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
			matrizT[j][i] = matriz[i][j];

		}
	}

	printf("\nM:\n");
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%03d", matriz[i][j]);
			
		}
		
		printf("\n");
		
	}
	
	
	
	
	return 0;
}