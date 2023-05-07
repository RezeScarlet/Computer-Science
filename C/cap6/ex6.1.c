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

		
		double delta = pow(b, 2) - (4 * a * c);
		printf("Delta: %.2f", delta);
		

		if (delta<0) {
			printf("\nS = {}");
			
		} else {
			float x1 = ((b*-1) + sqrt(delta)) / (2 * a);
			float x2 = ((b*-1) - sqrt(delta)) / (2 * a);
			if (x1 != x2) {
			printf("\nS = {%.2f, %.2f}", fmin(x1, x2), fmax(x1, x2));

			} else {
				printf("\nS = {%.2f}", x1);

			}
			
		}

	}

	return 0;
}