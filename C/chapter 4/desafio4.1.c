// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>

int main() {
	int troca;
	int array[10] = {5, 3, 7, 3, 6, 1, 9, 2, 7, 0};
	int quantPar = 0;
	int quantImp = 0;
	
	// for (int i = 0; i < 10; i++) {
	// 	printf("array[%d]: ", i);
	// 	scanf("%d", &array[i]);
	// }

for (int i = 0; i < 10; i++) {
	
	for (int j = 0; j < 10-i; j++){

		if (array[j] > array[j]) {
			troca = array[j];
			array[j] = array[j+1];
			array[j+1] = troca;

		}
	}
}
for (int i = 0; i < 10; i++) {
			printf("\n %d", array[i]);
		
	}

for (int i = 0; i < 20; i++) {
if (i<10) {
		if (array[i] % 2 == 0) {
			quantPar++;

		} else {
    	quantImp++;
		}
	}
}
  int arrayPar[quantPar];
  int arrayImp[quantImp];




	printf("Numeros pares:");
	if (quantPar>0) {
	for (int i = 0; i < quantPar; i++) {
			printf(" %d", arrayPar[i]);
		
	}

 } else {
		printf(" nao ha");
		
	}
	printf(".\n");
	
	printf("Numeros impares:");
	if (quantImp>0) {
 for (int i = 0; i < quantImp; i++) {
			printf(" %d", arrayImp[i]);
		
	}

 } else {
		printf(" nao ha");
		
	}
	printf(".");
	
	
	return 0;
}