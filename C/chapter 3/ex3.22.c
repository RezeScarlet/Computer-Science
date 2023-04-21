// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>

int main() {
	int 
	n1,
	n2,
	n3,
	n4,
	n5;

	printf("N1: ");
	scanf("%d", &n1);
	printf("N2: ");
	scanf("%d", &n2);
	printf("N3: ");
	scanf("%d", &n3);
	printf("N4: ");
	scanf("%d", &n4);
	printf("N5: \n");
	scanf("%d", &n5);
	if ( n1>0 && n2>0 && n3>0 && n4>0 && n5>0) {
		int maior = n1;
		if (n2>maior) {
			maior = n2;
		}
		if (n3>maior) {
			maior = n3;
		}
		if (n4>maior) {
			maior = n4;
		}
		if (n5>maior) {
			maior = n5;
		}
		
		for (int i = maior; i > 0; i--)	{
			printf("%04d  ", i);
			if (n1>=i) {
				printf("*");
				
			} else {
				printf(" ");
				
			}
			if (n2>=i) {
				printf("*");
				
			} else {
				printf(" ");
				
			}
			if (n3>=i) {
				printf("*");
				
			} else {
				printf(" ");
				
			}
			if (n4>=i) {
				printf("*");
				
			} else {
				printf(" ");
				
			}
			if (n5>=i) {
				printf("*");
				
			} else {
				printf(" ");
				
			}
			printf("\n");
			
			
		}
	} else {
		printf("Forneca apenas numeros positivos.");
		
	}
	

	return 0;
}