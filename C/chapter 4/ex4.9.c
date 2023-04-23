// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>

int main() {
	int array[5];
	int arrayInv[5];
	int a = 4;

	for (int i = 0; i < 5; i++) {
		printf("array[%d]: ", i);
		scanf("%d", &array[i]);

	}
	for (int i = 0; i < 5; i++) {
		arrayInv[a] = array[i];
		a--;

	}
	for (int i = 0; i < 5; i++) {
		printf("arrayInv[%d] = %d\n", i, arrayInv[i]);
		
	}
	
	return 0;
}