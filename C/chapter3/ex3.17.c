// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>

int main() {
	int
	input,
	n1 = 1,
	n2 = 1,
	novo;

	printf("Termo desejado: ");
	scanf("%d", &input);
		
	for (int i = 0; i <= input; i++) {
		if (i==0 || i == 1) {
			novo = 1;
		} else {
			novo = n1+n2;
		}
		n1 = n2;
		n2 = novo;
	}
	printf("Fibonacci de %d e %d", input, novo);
	

	return 0;
}