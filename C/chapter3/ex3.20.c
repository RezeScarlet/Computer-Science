// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>

int main() {
	
		for (int j = 0; j < 11; j++) {
			
			if (j<5) {
			
			for (int k = 0; k < j+1; k++)	{
				printf("*");
				
			}
			
			} else if (j>5) {

				for (int k = 4; k > j-7; k--)	{
				printf("*");			
				}
				}
			
			
			printf("\n");
			
		}

		printf("\n");

		for (int j = 0; j < 11; j++) {
			
			if (j<5) {
			
			for (int k = 4; k > j; k--)	{
				printf(" ");
				
			}
			for (int k = 0; k < j+1; k++)	{
				printf("*");
				
			}
			
			} else if (j>5) {

				for (int k = 0; k < j-6; k++)	{
				printf(" ");			
				
				}
				for (int k = 4; k > j-7; k--)	{
				printf("*");			
				}
			}
			
			printf("\n");
			
		}
		
	
	
	return 0;
}