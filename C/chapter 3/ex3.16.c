// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>

int main() {
	int
	n1 = 1,
	n2 = 1,
	novo;
	
	for (int i = 0; i < 20; i++) {
		if (i==0 || i == 1) {
			novo = 1;
		} else {
			novo = n1+n2;
		}
		
		printf("%d ", novo);

		n1 = n2;
		n2 = novo;
	}

	return 0;
}