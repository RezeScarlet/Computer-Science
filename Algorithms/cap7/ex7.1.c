// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int absoluto (int n);

int main() {
	int numeros[5];

	for (int i = 0; i < 5; i++) {
		printf("n%d: ", i);
		scanf("%d", &numeros[i]);
		
	}

	for (int i = 0; i < 5; i++) {
		printf("\nabsoluto(%d) = %d", numeros[i], absoluto(numeros[i]));
		
	}
	
	

	return 0;
}

int absoluto (int n) {
	if (n<0) {
		return n*-1;
	} else {
		return n;
	}
	
}