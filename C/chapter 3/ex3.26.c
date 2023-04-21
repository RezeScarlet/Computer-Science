// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>

int main() {
	int valor = 0;
	int maior = 0;
	int menor = 0;
	int i = 0;

	while (valor > -1) {
		printf("Entre com um valor: ");
		scanf("%d", &valor);
		if (valor > -1) {
			if (i==0) {
				maior = valor;
				menor = valor;
		} else {
			if (valor > maior) {
				maior = valor;
			}
			if (valor < menor) {
				menor = valor;
			}
		}
		}
		i++;
	}
	printf("Menor numero: %d\n", menor);
	printf("Maior numero: %d", maior);
	
	
	return 0;
}