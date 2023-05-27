// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>

void decompoeTempo( int totalSeg, int *horas, int *minutos, int *seg );

int main() {
	int totalSeg;
	int horas;
	int minutos;
	int seg;

	printf("Total de segundos: ");
	scanf("%d", &totalSeg);
	
	decompoeTempo(totalSeg, &horas, &minutos, &seg);
	
	printf("\n%d segundo(s) corresponde(m) a:", totalSeg);
	printf("\n    %d hora(s)", horas);
	printf("\n    %d minuto(s)", minutos);
	printf("\n    %d segundo(s)", seg);
		

	return 0;
}

void decompoeTempo( int totalSeg, int *horas, int *minutos, int *seg ) {
	*horas = totalSeg / 3600;
	*minutos = totalSeg % 3600 / 60;
	*seg = totalSeg % 60;
}