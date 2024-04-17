// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>

int main() {
	int i = 0;
	int j = 0;
	float peso = 0;
	float media = 0;
	float maior = 0;
	while (peso > -1)	{
		i++;
		printf("Entre com o peso da pessoa %02d: ", i);
		scanf("%f", &peso);
		if (peso >= 60)	{
			j++;
			media += peso;
			}
		if (maior < peso) {
				maior = peso;
		}

	}
	if (j>1){
		media = media/j;
	}

	printf("Media dos pesos acima de 60kg: %.2f\n", media);
	printf("A pessoa mais pesada possui %.2fkg", maior);

	

	return 0;
}