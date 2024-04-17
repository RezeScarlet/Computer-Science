// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool ehPalindromo( const char *str );

int main() {
	char string[40];

	printf("String: ");
	fgets(string, 40, stdin);
	string[strlen(string) - 1] = '\0';

	printf("\"%s\" ", string);
	if (!ehPalindromo(string)) {
		printf("nao ");
		
	}
	printf("eh um palindromo!");
	
	return 0;
}

bool ehPalindromo( const char *str ) {
	for (int i = 0; i < strlen(str); i++) {

		if (str[i] != str[strlen(str) - (i + 1)]) {
			return false;

		}
	}

	return true;
}