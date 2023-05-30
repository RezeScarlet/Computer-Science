// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char string[40];	

	printf("Sentenca: ");
	fgets(string, 40, stdin);
	string[strlen(string)-1] = '\0';

	int tamanho = strlen(string);

	for (int i = 0; i < tamanho; i+=2) {
		if (string[i] == ' ') {
			printf("' '");
			
		} else {
			printf("%c", string[i]);
		}
		if (i != tamanho - 2) {
			printf(", ");

		}		
	}	
	
	return 0;
}