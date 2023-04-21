// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>

int main() {
	int array[5];
	int arrayCubo[5];
	for (int i = 0; i < 5; i++) {
		printf("array[%d]: ", i);
		scanf("%d", &array[i]);
		arrayCubo[i] = array[i] * array[i] * array[i];
		
	}
	for (int i = 0; i < 5; i++) {
		printf("arrayCubo[%d] = %d\n", i, arrayCubo[i]);
		
	}
	
	
	return 0;
}