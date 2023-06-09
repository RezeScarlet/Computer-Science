// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool contem( const char *fonte, const char *aPesquisar );

int main() {
	char fonte[40];
	char pesquisa[40];

	printf("String fonte: ");
	fgets(fonte, 40, stdin);
	fonte[strlen(fonte) - 1] = '\0';

	printf("String a pesquisar: ");
	fgets(pesquisa, 40, stdin);
	pesquisa[strlen(pesquisa) - 1] = '\0';

	printf("\"%s\" ", pesquisa);
	if (!contem(fonte, pesquisa)) {
		printf("nao ");
		
	}
	printf("esta contida em \"%s\"", fonte);
	
	
	
	
	return 0;
}

bool contem( const char *fonte, const char *aPesquisar ) {
	if (strstr(fonte, aPesquisar)) {
		return 1;

	}
	return 0;	
}