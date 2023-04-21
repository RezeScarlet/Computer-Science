// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>

int main() {
	int i = 0;
	int idade = 1;
	int menor21 = 0;
	int maior50 = 0;

	while (idade>0) {
		i++;
		printf("Idade da pessoa %02d: ", i);
		scanf("%d", &idade);
		if (idade < 21 && idade > 0) {
			menor21++;

		}
		if (idade > 50) {
			maior50++;

		}
	}
	printf("Total de pessoas menores de 21 anos: %d\n", menor21);
	printf("Total de pessoas com mais de 50 anos: %d", maior50);

	return 0;
}