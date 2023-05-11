// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>

int lePositivo() {
	int valor;
		do {

			scanf("%d", &valor);			
			if (valor <= 0)
			printf("Entre com um valor positivo!: ");
		}	while (valor <= 0);
	
	return valor;	
}

int somatorio(int valor) {
	int somatorio = 0;
	for (int i = 0; i <= valor; i++) {
		somatorio += i;
	}
	
	return somatorio;
}

int main() {
	int numeros[5];
	
	for (int i = 0; i < 5; i++) {
		printf("N[%d]: ", i);
		numeros[i] = lePositivo();
		
	}

	for (int i = 0; i < 5; i++) {
		printf("\nSomatorio de 1 a %d: %d", numeros[i], somatorio(numeros[i]));
		
	}
	
	
	return 0;
}