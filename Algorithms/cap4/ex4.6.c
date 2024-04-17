// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>

int main() {
	int valor;
	int ocorrencias = 0;
	int array[5];
	int arrayTeste[5] = {};

	for (int i = 0; i < 5; i++) {
		printf("array[%d]: ", i);
		scanf("%d", &array[i]);

	}
	printf("Buscar por: ");
	scanf("%d", &valor);	
	
	for (int i = 0; i < 5; i++) {
		if (valor == array[i]) {
			arrayTeste[i] = 1;
			ocorrencias++;

		}
	}
	if (ocorrencias == 0) {
		printf("O array nao contem o valor %d.", valor);
		
	} else if (ocorrencias == 1) {
		for (int i = 0; i < 5; i++) {
			if (arrayTeste[i] == 1) {
			printf("O valor %d foi encontrado no indice %d do array.", valor, i);

			}
		}
		
		
	} else if (ocorrencias>1){
			printf("O valor %d foi encontrado nos indices ", valor);
		
				for (int i = 0; i < 5; i++) {
					if (arrayTeste[i] != 0) {
						ocorrencias--;
						printf("%d", i);
						if (ocorrencias == 1) {
							printf(" e ");
							
						} else if (ocorrencias != 1 && ocorrencias != 0) {
							printf(", ");
					
						}
					}					
				}

			printf(" do array.");
				
		}
			
	return 0;
}