// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>

void classificaTrinca(int n1, int n2, int n3);

int main() {
	int valores[3][3];

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("N%d[%d]: ", j+1, i);
			scanf("%d", &valores[i][j]);			
			
		}
	}

	for (int i = 0; i < 3; i++) {
		printf("\n%d, %d e %d: ", valores[i][0], valores[i][1], valores[i][2]);
		classificaTrinca(valores[i][0], valores[i][1], valores[i][2]);

	}
	
	return 0;
}

void classificaTrinca(int n1, int n2, int n3) {
	int troca;

	if (n2 > n1) {
		troca = n1;
		n1 = n2;
		n2 = troca;

	}

		if (n3 > n1) {
		troca = n1;
		n1 = n3;
		n3 = troca;

	}

		if (n3 > n2) {
		troca = n2;
		n2 = n3;
		n3 = troca;

	}

	printf("%d <= %d <= %d", n3, n2, n1);

	
}