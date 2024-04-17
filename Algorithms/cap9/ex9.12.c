// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int contarOcorrencias( const char *str, char c );

int main() {
	char frase[40];
char letras[5] = "abcde";

	printf("Frase: ");
	fgets(frase, 40, stdin);
	frase[strlen(frase) - 1] = '\0';

	for (int i = 0; i < 5; i++) {
		printf("\n%c/%c: %d", toupper(letras[i]), letras[i], contarOcorrencias(frase, letras[i]));
		
	}
	
	
	return 0;
}

int contarOcorrencias( const char *str, char c ) {
	int quant = 0;
	
	for (int i = 0; i < strlen(str); i++) {
		if (tolower(str[i]) == c) {
			quant++;

		}
	}
	

	return quant;
}