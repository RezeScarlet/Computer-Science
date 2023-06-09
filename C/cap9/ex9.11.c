// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int contarOcorrencias( const char *str, char c );

int main() {
	char frase[40];
	char caractere;
	
	printf("Caractere: ");
	scanf(" %c", &caractere);
	getchar();
	
	while (1) {

		printf("Frase: ");
		fgets(frase, 40, stdin);
		frase[strlen(frase) - 1] = '\0';
		
		if (strcmp(frase, "fim") == 0) {
			break;
		}

		printf("\"%s\" tem %d ocorrencia(s) do caractere \'%c\'\n", frase, contarOcorrencias(frase, caractere), caractere);
		
	}
		
	
	return 0;
}

int contarOcorrencias( const char *str, char c ) {
	int quant = 0;
	
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == c) {
			quant++;

		}
	}
	

	return quant;
}