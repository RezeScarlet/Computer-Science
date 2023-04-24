// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>

int main() {
	int array[10];
	int quant = 0;

	for (int i = 0; i < 10; i++) {
		printf("array[%d]: ", i);
		scanf("%d", &array[i]);
		
	}

	for (int i = 0; i < 10-quant; i++) {
		if (array[i] % 2 == 0) {
			
			for (int j = i; j < 10-quant; j++) {
				array[j] = array[j+1];
			}
			i = quant;
			quant++;
			
		}
	}
	for (int i = 0; i < quant; i++) {
		printf("array[%d] = %d\n", i, array[i]);
	
	}
	
	return 0;
}