// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>

int main() {
int quant = 0;
int valor;
while (quant < 1 || quant > 9) {	
	printf("Quantidade de elementos (1 a 9): ");
	scanf("%d", &quant);
	if (quant < 1 || quant > 9) {
		printf("Quantidade incorreta, forneca novamente!\n");
		
	}
}

	int array[quant+1];
	for (int i = 0; i < quant; i++)	{
		printf("array[%d]: ", i);
		scanf("%d", &array[i]);
		
	}
	printf("Valor que sera inserido: ");
	scanf("%d", &valor);

	for (int i = quant; i >= 0; i--) {
		if (i == 0) {
			array[0] = valor;
		} else {
			array[i] = array[i-1];
		
		}
	}
	
	for (int i = 0; i <= quant; i++) {
		printf("array[%d] = %d\n", i, array[i]);
		
	}
	
	
	

	return 0;
}