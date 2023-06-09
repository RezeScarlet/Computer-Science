// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int contarPalavras( const char *str );

int main() {
	char frase[40];

	printf("Frase: ");
	fgets(frase, 40, stdin);
	frase[strlen(frase) - 1] = '\n';

	printf("Quantidade de palavras: %d", contarPalavras(frase));
	
	
	return 0;
}

int contarPalavras( const char *str ) {
	int cont = 1;
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == ' ') {
			cont++;			

		}
	}
	
	return cont;
}