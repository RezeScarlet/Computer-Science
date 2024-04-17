// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char string[40];

	printf("String: ");
	fgets(string, 40, stdin);
	string[strlen(string)-1] = '\0';
	
	for (int i = 0; i < 4; i++) {
		printf("%c", string[i]);
		if (i != 3) {
			printf(", ");
			
		}

	}
	printf(".");
	
		
	

	return 0;
}