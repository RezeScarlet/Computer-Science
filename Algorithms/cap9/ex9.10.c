// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>

int tamanho( const char *str );

int main() {
	char frase[40];

	printf("Frase: ");
	fgets(frase, 40, stdin);
	frase[tamanho(frase)-1] = '\0';

	printf("\n%d caractere(s)!", tamanho(frase));
	
	return 0;
}

int tamanho( const char *str ) {
	int tamanho = 0;
	
	while (str[tamanho] != '\0') {
		tamanho++;
	}

	return tamanho;
}