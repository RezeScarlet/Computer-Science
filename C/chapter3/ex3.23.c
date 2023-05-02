// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>

int main() {
	float
	nota,
	media = 0;
	printf("Forneca a nota de 10 alunos:\n");
	for (int i = 0; i < 10; i++) {
		printf("Nota %02d: ", i+1);
		scanf("%f", &nota);
		media += nota;
		
	}

	media = media/10;
	printf("A media aritmetica das dez notas e: %.2f", media);
	
	
	
	return 0;
}