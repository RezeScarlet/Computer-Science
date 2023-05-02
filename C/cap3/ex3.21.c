// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>

int main() {
	int 
	altura;

	printf("Altura: ");
	scanf("%d", &altura);
	
	if (altura>0) {
		for (int j = 1; j < altura+1; j++) {
			for (int k = altura; k > j; k--)	{
				printf(" ");
				
			}

				for (int k = 0; k < j; k++)	{
				printf("*");
				
			}
				

			
			for (int k = 0; k < j-1; k++)	{
				printf("*");
				
			}
				printf("\n");
			}
		} else if (altura<0) {
			for (int j = 1; j < (altura*-1)+1; j++) {
				for (int k = 0; k < j-1; k++)	{
					printf(" ");
					
				}
				for (int k = altura*-1; k > j; k--)	{
					printf("*");
					
				}

				for (int k = altura*-1; k > j-1; k--)	{
					printf("*");
					
				}
					

				
				printf("\n");
			}
	}
	
	return 0;
}