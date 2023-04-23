// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>

int main() {
	int array[5];
	int valor;
	int quant = 0;
	int cont = 0;

	for (int i = 0; i < 5; i++)	{
		printf("array[%d]: ", i);
		scanf("%d", &array[i]);
	}
	printf("Copiar maiores que: ");
	scanf("%d", &valor);

	for (int i = 0; i < 5; i++)	{
		if (valor < array[i])	{
			quant++;

		}
	}
	if (quant == 0) {
		printf("Nao houve copia!");

	}
	else {
		int arrayCopia[quant];
		for (int i = 0; i < 5; i++)
		{
			if (valor < array[i] && cont < quant)	{
				arrayCopia[cont] = array[i];
				cont++;

			}
		}

		for (int i = 0; i < quant; i++)	{
			printf("arrayCopia[%d] = %d\n", i, arrayCopia[i]);
			
		}
	}

	return 0;
}