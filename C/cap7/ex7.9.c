// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>


int lePositivo() {
	int valor;
		do {

			scanf("%d", &valor);			
			if (valor <= 0)
			printf("Entre com um valor positivo!: ");
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

int main() {
	
	return 0;
}