// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>

int main() {
	int quant = 0;
	int existe = 0;
	int array1[5];
	int array2[5];
	int arrayInter[5];

	printf("Forneca os valores do primeiro array:\n");
	for (int i = 0; i < 5; i++) {
	printf("\tarray1[%d]: ", i);
	scanf("%d", &array1[i]);

	}

	printf("Forneca os valores do segundo array:\n");
	for (int i = 0; i < 5; i++) {
	printf("\tarray2[%d]: ", i);
	scanf("%d", &array2[i]);

	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (array1[i] == array2[j]) {
				if (quant>0) {
					for (int k = 0; k < quant; k++) {
						if (array1[i] == arrayInter[k]) {
							existe = 1;
						}
					}
					if (existe != 1) {
						arrayInter[quant] = array1[i];
						quant++;
						existe = 0;
					}
				
					
				} else {
					arrayInter[quant] = array1[i];
					quant++;
					existe = 0;

				}
				
			}
		}		
	}
	if (quant == 0) {
		printf("Nao ha interseccao entre os elementos dos dois arrays fornecidos!");
		
	} else {
		for (int i = 0; i < quant; i++) {
			printf("\narrayInterseccao[%d] = %d", i, arrayInter[i]);
			
		}
	}
	
	return 0;
}