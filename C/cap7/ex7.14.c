// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void imprimeDuplaClassificada(int n1, int n2, bool emOrdemCrescente);

int main() {
	int valores[5][2];

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 2; j++) {
			printf("N%d[%d]: ", j+1, i);
			scanf("%d", &valores[i][j]);			
			
		}
	}

	for (int i = 0; i < 5; i++) {
		printf("\n%d e %d: ", valores[i][0], valores[i][1]);
		if ((i+1) % 2 == 0) {
			imprimeDuplaClassificada(valores[i][0], valores[i][1], false);

		} else {
			imprimeDuplaClassificada(valores[i][0], valores[i][1], true);

		}
	}
	
	return 0;
}

void imprimeDuplaClassificada(int n1, int n2, bool emOrdemCrescente) {
	if (emOrdemCrescente) {
		if (n1 > n2) {
			printf("%d <= %d", n2, n1);

		} else {
			printf("%d <= %d", n1, n2);
		
		}
	} else {
		if (n1 < n2) {
			printf("%d >= %d", n2, n1);

		} else {
			printf("%d >= %d", n1, n2);
		
		}
	}
	
}