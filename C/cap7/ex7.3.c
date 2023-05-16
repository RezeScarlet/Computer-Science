// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>

float MaiorNumero (float n1, float n2);

int main() {
	float numeros[5][2];
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 2; j++) {
			printf("N%d[%d]: ", j+1, i);
			scanf("%f", &numeros[i][j]);			
			
			while (numeros[i][j] < 1) {
				printf("Entre com um valor positivo!\nN%d[%d]:", j, i+1);
				scanf("%f", &numeros[i][j]);
				
			}
		}
	}

	for (int i = 0; i < 5; i++) {
		float maior = MaiorNumero(numeros[i][0], numeros[i][1]);
		printf("\n%.2f, %.2f: ", numeros[i][0], numeros[i][1]);

		if (maior == -1) {
			printf("Eles sao iguais");
		
		} else {
			printf("O maior valor e %.2f", maior);

		} 
	}
	
	
	return 0;
}

float MaiorNumero (float n1, float n2) {
	if (n1 == n2) {
		return -1;

	} else if (n1 > n2) {
		return n1;

	} else if (n2 > n1) {
		return n2;
		
	} 
}