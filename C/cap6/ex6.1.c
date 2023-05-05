// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int a;
	int b;
	int c;

	printf("a: ");
	scanf("%d", &a);
	printf("b: ");
	scanf("%d", &b);
	printf("c: ");
	scanf("%d", &c);

	if (a == 0) {
		printf("Nao existe equacao do segundo grau!");
	} else {

		
		float delta = pow(b, 2) - 4 * a * c;
		printf("Delta: %.2f", delta);
		

		if (delta<0) {
			printf("S = {}");
			
		} else {
			float x1 = ((b*-1) + delta) / (2 * a);
			float x2 = ((b*-1) - delta) / (2 * a);
			printf("\nS = {%.2f, %.2f}", fmin(a, b), fmax(a, b));
			
		}

	}

	return 0;
}