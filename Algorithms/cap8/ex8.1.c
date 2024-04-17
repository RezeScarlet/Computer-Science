// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>

void somatorioMedia( const float a[], int n, float *somatorio, float *media );

int main() {
	float n[10];
	float somatorio;
	float media;

	for (int i = 0; i < 10; i++) {
		printf("n[%d]: ", i);
		scanf("%f", &n[i]);
	}

	somatorioMedia(n, 10, &somatorio, &media);

	printf("\nSomatorio: %.2f", somatorio);
	printf("\nMedia: %.2f", media);
	
	return 0;
}

void somatorioMedia( const float a[], int n, float *somatorio, float *media ) {
	*somatorio = 0;
	*media = 0;
	for (int i = 0; i < n; i++) {
		*somatorio += a[i];
		
	}
	*media = *somatorio/n;
	
}