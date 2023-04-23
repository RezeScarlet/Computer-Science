// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>

int main() {
	int mult;
	int array[5];
	int arrayMult[5];
	for (int i = 0; i < 5; i++) {
		printf("array[%d]: ", i);
		scanf("%d", &array[i]);
		
	}
	printf("Multiplicar por: ");
	scanf("%d", &mult);
	for (int i = 0; i < 5; i++) {
		arrayMult[i] = array[i] * mult;
		printf("arrayMult[%d] = %d\n", i, arrayMult[i]);
		
	}
	
	return 0;
}