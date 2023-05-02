// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>

int main() {
	for (int i = 0; i < 9; i++) {
	
		if (i<5) {
		for (int j = 0; j < i+1; j++) {

			printf("*");
		}
		} else {
			for (int j = 4; j > i-5; j--) {

			printf("*");			
		}
		}

		printf("\n");
	}
	return 0;
}