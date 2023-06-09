// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void removerLetra( char *str, char c );

int main() {
	char frase[40];
	char caractere;

	printf("Frase: ");
	fgets(frase, 40, stdin);
	frase[strlen(frase) - 1] = '\0';

	printf("Caractere: ");
	scanf(" %c", &caractere);

	removerLetra(frase, caractere);

	printf("\n%s", frase);
	
	return 0;
}

void removerLetra( char *str, char c ) {
	char strOriginal[40];
	int cont = 0;
	strcpy(strOriginal, str);

	for (int i = 0; i < strlen(strOriginal); i++) {

		if (c == tolower(strOriginal[i])) {
			strOriginal[i] = '0';			
			cont++;

		} else {
			str[i-cont] = strOriginal[i];

		}
	}

	str[strlen(str)-cont] = '\0';
	
}