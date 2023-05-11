// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool ehPar(int n) {
	if (n % 2 == 0) {
		return true;

	} else {
		return false;

	}
}

bool ehDivisivel(int dividendo, int divisor) {
	if (dividendo % divisor == 0) {
		return true;

	} else {
		return false;
		
	}
}

int main() {
	int n[5][2];

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 2; j++) {
			printf("n%d[%d]: ", j+1, i);
			scanf("%d", &n[i][j]);
			
		}	
	}
	
	for (int i = 0; i < 5; i++) {
		if ( ehPar(n[i][0]) ) {
			printf("\n%d eh par e %d ", n[i][0], n[i][0]);

		} else {
			printf("\n%d eh impar e %d ", n[i][0], n[i][0]);
			
		}

		if ( !ehDivisivel(n[i][0], n[i][1] )) {
			printf("nao ");
			
		}
		printf("eh divisivel por %d", n[i][1]);
		
	}
	


	return 0;
}