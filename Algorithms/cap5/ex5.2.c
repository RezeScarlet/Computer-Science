// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>

int main() {
	int array1[3][3];
	int array2[3][3];
	int arraySoma[3][3];

	
	for (int i = 1; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 3; k++) {
				printf("array%d[%d][%d]: ", i, j, k);
				if (i==1) {
					scanf("%d", &array1[j][k]);

				} else {
					scanf("%d", &array2[j][k]);
					
				}			
			}
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			arraySoma[i][j] = array1[i][j] + array2[i][j];
		}
	}
	printf("\narray1:       array2:       arraySoma:\n");
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%03d ", array1[i][j]);
						

			
		}
		if (i == 1) {
			printf("+ ");
			
		} else {
			printf("  ");
			
		}


		for (int j = 0; j < 3; j++) {
			printf("%03d ", array2[i][j]);

		}

		if (i == 1) {
			printf("= ");
			
		} else {
			printf("  ");
			
		}
		for (int j = 0; j < 3; j++) {
			printf("%03d", arraySoma[i][j]);
			if (j != 2) {
				printf(" ");
			}
			
		}
		printf("\n");
		

	
		
	}
	
	
	return 0;
}