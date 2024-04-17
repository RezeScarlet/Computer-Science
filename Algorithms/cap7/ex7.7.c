// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool ehPrimo(int n);

int main() {
	for (int i = 1; i <= 20; i++) {
		if ( ehPrimo(i) ) {
			printf("\n%d: eh primo", i);
			
		} else {
			printf("\n%d: nao eh primo", i);
			
		}
	}
	
	return 0;
}

bool ehPrimo(int n) {
	if (n == 1) {
		return false;
	}
	
	for (int i = 2; i < n-1; i++) {
		if (n % i == 0) {
			return false;
			
		}
	}
	
	return true;
}