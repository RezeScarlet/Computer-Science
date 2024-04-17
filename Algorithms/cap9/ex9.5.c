// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char string[40];

	printf("Nome: ");
	fgets(string, 40, stdin);
	string[strlen(string)-1] = '\0';
	
	for (int i = 0; i < 5; i++) {
		printf("\n%s", string);
		
	}
	
	return 0;
}