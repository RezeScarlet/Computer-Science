// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>

int main() {
	int matriz1[3][2];
	int matriz2[2][3];

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			printf("array1[%d][%d]: ", i, j);
			scanf("%d", &matriz1[i][j]);
					

		}
	}

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("array2[%d][%d]: ", i, j);
			scanf("%d", &matriz2[i][j]);	
						printf("\n%d\n", matriz2[i][j]);
	

		}
	}

	printf("\nA x B =\n");
	for (int i = 0; i < 3; i++) {	
		printf("%d", matri);
		
		printf("%03d ", matriz1[1][1]*matriz2[1][i]+matriz1[1][2]*matriz2[2][i]);
		
	}
	
	
	
	
	
	return 0;
}