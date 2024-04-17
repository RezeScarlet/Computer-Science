// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char strings[5][2][40];
	
	// Preenchimento da variavel strings

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 2; j++) {
			printf("Par %d, palavra %d: ", i+1, j+1);
			
			fgets(strings[i][j], 40, stdin);
			strings[i][j][strlen(strings[i][j]) - 1] = '\0';
			
		}		
	}
	// =============== FIM - Leitura ====================

	// Print dos resultados

	for (int i = 0; i < 5; i++) {
		int ordem = strcmp(strings[i][0], strings[i][1]);

		printf("\n%s - %s: ", strings[i][0], strings[i][1]);

		if (ordem == 0) {
			printf("IGUAIS");
			
		} else if (ordem < 0) {
			printf("ORDEM CRESCENTE");

		} else if (ordem > 0) {
			printf("ORDEM DECRESCENTE");
			
		}
	}
	

	// ================ FIM - Resultados ==================


	return 0;
}