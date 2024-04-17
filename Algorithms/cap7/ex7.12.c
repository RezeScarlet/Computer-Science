// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>

void classificaDupla(int n1, int n2);

int main() {
	int valores[3][2];

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			printf("N%d[%d]: ", j+1, i);
			scanf("%d", &valores[i][j]);			
			
		}
	}

	for (int i = 0; i < 3; i++) {
		printf("\n%d e %d: ", valores[i][0], valores[i][1]);
		classificaDupla(valores[i][0], valores[i][1]);

	}
	
	return 0;
}

void classificaDupla(int n1, int n2) {
	if (n1 > n2) {
		printf("%d <= %d", n2, n1);

	} else {
		printf("%d <= %d", n1, n2);
		
	}
	
}