// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>

int main() {
	int array1[5];
	int array2[5];
	int arraySoma[5];

	printf("Forneca os valores do primeiro array:\n");
	for (int i = 0; i < 5; i++) {
	printf("\tarray1[%d]: ", i);
	scanf("%d", &array1[i]);

	}

	printf("Forneca os valores do segundo array:\n");
	for (int i = 0; i < 5; i++) {
	printf("\tarray2[%d]: ", i);
	scanf("%d", &array2[i]);

	}

	for (int i = 0; i < 5; i++) {
		arraySoma[i] = array1[i] + array2[i];
		printf("arraySoma[%d] = %d\n", i, arraySoma[i]);
		
	}
	
	return 0;
}