// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char string[40];

	printf("Sentenca: ");
	fgets(string, 40, stdin);
	string[strlen(string)-1] = '\0';

	printf("\nPrimeiro caractere: %c", string[0]); 
	printf("\nUltimo caractere: %c", string[strlen(string)-1]);
	printf("\nNumero de caracteres: %d", strlen(string));
	
	return 0;
}