// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	char strings[3][40];
	int ordem[3];
	char troca[40];

	for (int i = 0; i < 3; i++) {
		printf("String %d: ", i+1);
		fgets(strings[i], 40, stdin);
		strings[i][strlen(strings[i]) - 1] = '\0';

	}
	
	
	if (strcmp(strings[0], strings[1]) > 0) {
		strcpy(troca, strings[0]);
		strcpy(strings[0], strings[1]);
		strcpy(strings[1], troca);
	}

	if (strcmp(strings[0], strings[2]) > 0) {
		strcpy(troca, strings[0]);
		strcpy(strings[0], strings[2]);
		strcpy(strings[2], troca);
	}

	if (strcmp(strings[1], strings[2]) > 0) {
		strcpy(troca, strings[1]);
		strcpy(strings[1], strings[2]);
		strcpy(strings[2], troca);
	}


	printf("\n%s, %s e %s", strings[0], strings[1], strings[2]);
	
	return 0;
}