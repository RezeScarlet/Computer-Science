// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>

int main() {
	int matriz[3][3];

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("array[%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
			
		}
	}

	printf("Determinante: %d", ((matriz[0][0]*matriz[1][1]*matriz[2][2])+(matriz[0][1]*matriz[1][2]*matriz[2][0])+(matriz[0][2]*matriz[1][0]*matriz[2][1]))-((matriz[0][2]*matriz[1][1]*matriz[2][0])+(matriz[0][0]*matriz[1][2]*matriz[2][1])+(matriz[0][1]*matriz[1][0]*matriz[2][2])));
	
	return 0;
}