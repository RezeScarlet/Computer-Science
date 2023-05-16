// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>

int lePositivo();

int somaDivisores(int n);

int main() {
	int n[5];
	
	for (int i = 0; i < 5; i++) {
		printf("N[%d]: ", i);
		n[i] = lePositivo();		
		
	}

	for (int i = 0; i < 5; i++) {
		printf("\nSoma dos divisores de %d: %d", n[i], somaDivisores(n[i]));
		
	}
	

	return 0;
}

int lePositivo() {
	int valor;
		do {

			scanf("%d", &valor);			
			if (valor <= 0)
			printf("Entre com um valor positivo!: ");
		}	while (valor <= 0);
	
	return valor;	
}

int somaDivisores(int n) {	
	int soma = 0;
	for (int i = n-1; i > 0; i--) {		
		if (n % i == 0) {
			
			soma += i;

		}
	}
	
	return soma;
}