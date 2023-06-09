// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void imprimirCentralizado( const char *str );

int main() {
	char string[40];

	printf("String: ");
	fgets(string, 40, stdin);
	string[strlen(string) - 1] = '\0';

	imprimirCentralizado(string);

	return 0;
}

void imprimirCentralizado( const char *str ) {
	
	printf("\n");
	
	for (int i = 0; i < 80-strlen(str); i++) {
		printf(" ");
	}
	
	printf("%s", str);
}