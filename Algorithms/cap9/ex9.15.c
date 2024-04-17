// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void tornarMinuscula( char *str );

int main() {
	char frase[40];

	printf("Frase: ");
	fgets(frase, 40, stdin);
	frase[strlen(frase) - 1] = '\0';

	tornarMinuscula(frase);

	printf("\n%s", frase);
	

	return 0;
}

void tornarMinuscula( char *str ) {
	for (int i = 0; i < strlen(str); i++) {
		str[i] = tolower(str[i]);
	}
	
}