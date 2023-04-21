// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>

int main() {
	int quant = 0;
	int valor = 0;
	float somatorio = 0;
	float media = 0;

	while (valor > -1) {
		printf("Entre com um valor: ");
		scanf("%d", &valor);
		if (valor > -1) {
			quant++;
			somatorio += valor;
			
		}
	}
	if (quant!=0) {
		media = somatorio/quant;
	
	}
	printf("Somatorio: %.2f\n", somatorio);
	printf("Media: %.2f\n", media);
	printf("Quantidade: %d", quant);
	
	return 0;
}