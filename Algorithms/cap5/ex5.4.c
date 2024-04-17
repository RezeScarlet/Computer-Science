// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>

int main() {
	int matriz[2][2];
	int determinante;

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			printf("array[%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
			
			
		}
		
	}
	printf("Determinante: %d", (matriz[0][0]*matriz[1][1])-(matriz[0][1]*matriz[1][0]));
	
	return 0;
}