// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>


int lePositivo();

bool ehTriangulo(int ladoA, int ladoB, int ladoC);

int tipoTriangulo(int ladoA, int ladoB, int ladoC);

int main() {
	int triangulos[5][3];

	for (int i = 0; i < 5; i++) {
		printf("\nLadoA[%d]: ", i);
		triangulos[i][0] = lePositivo();
		
		printf("\nLadoB[%d]: ", i);
		triangulos[i][1] = lePositivo();

		printf("\nLadoC[%d]: ", i);
		triangulos[i][2] = lePositivo();
		
	}

	for (int i = 0; i < 5; i++) {
		printf("\nValores %d, %d e %d: ", triangulos[i][0], triangulos[i][1], triangulos[i][2]);
		switch ( tipoTriangulo(triangulos[i][0], triangulos[i][1], triangulos[i][2]) ) {
			case 0:
				printf("nao formam um triangulo");
				break;
			case 1:
				printf("triangulo equilatero");
				break;
			case 2:
				printf("triangulo isosceles");
				break;
			case 3: 
				printf("triangulo escaleno");
				break;
			
				
				
		}
	}
	
	
	return 0;
}

int lePositivo() {
	int valor;
		do {

			scanf("%d", &valor);			
			if (valor <= 0)
			printf("\nEntre com um valor positivo!: ");
		}	while (valor <= 0);
	
	return valor;	
}

bool ehTriangulo(int ladoA, int ladoB, int ladoC) {
	if ((abs(ladoA - ladoB) < ladoC && ladoC < ladoA + ladoB) && (abs(ladoA - ladoC) < ladoB && ladoB < ladoA + ladoC) && (abs(ladoB - ladoC) < ladoA && ladoA < ladoB + ladoC)) {
		return true;

	}	else {
		return false;
		
	}
		
}

int tipoTriangulo(int ladoA, int ladoB, int ladoC) {
	if ( ehTriangulo(ladoA, ladoB, ladoC) ) {
		if (ladoA == ladoB && ladoB == ladoC) {
			return 1;
		} else if (ladoA == ladoB || ladoA == ladoC || ladoB == ladoC) {
			return 2;
		} else {
			return 3;
		}
	} else {
		return 0;
	}
}