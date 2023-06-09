// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void tornarMaiuscula( char *str );

int main() {
	char frase[40];

	printf("Frase: ");
	fgets(frase, 40, stdin);
	frase[strlen(frase) - 1] = '\0';

	tornarMaiuscula(frase);

	printf("\n%s", frase);
	

	return 0;
}

void tornarMaiuscula( char *str ) {
	for (int i = 0; i < strlen(str); i++) {
		str[i] = toupper(str[i]);
	}
	
}