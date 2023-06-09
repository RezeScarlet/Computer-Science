// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void substring( char *recorte, const char *origem, int inicio, int fim );

int main() {
	int inicio;
	int fim;
	char string[40];
	char recorte[40];

	printf("String: ");
	fgets(string, 40, stdin);
	string[strlen(string) - 1] = '\n';

	printf("Inicio: ");
	scanf("%d", &inicio);
	
	printf("Fim: ");
	scanf("%d", &fim);

	substring(recorte, string, inicio, fim);

	printf("\nRecorte: %s", recorte);
	
	return 0;
}

void substring( char *recorte, const char *origem, int inicio, int fim ) {
	strcpy(recorte, origem);

	if (inicio < fim && inicio + fim < strlen(origem)) {
		for (int i = inicio; i < fim; i++) {
			recorte[i] = origem[i];

		}
		recorte[fim] = '\0';

	}
}