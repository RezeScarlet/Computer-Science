// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float areaCirculo (float raio);

float circunferenciaCirculo (float raio);

int main() {
	const double PI = acos(-1);
	float raio;

	printf("Raio: ");
	scanf("%f", &raio);
	
	printf("\nArea = %.2f", areaCirculo(raio));
	printf("\nCircunferencia = %.2f", circunferenciaCirculo(raio));
	
	
	return 0;
}

float areaCirculo (float raio) {
	double PI = acos(-1);
	return PI*pow(raio, 2);

}

float circunferenciaCirculo (float raio) {
	double PI = acos(-1);
	
	return 2*PI*raio;

}