// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>

int buscar(const int *a, int n, int chave);

int main() {
	int a[10];
	int chave;
	int n;
	int posicao;

	for (int i = 0; i < 10; i++) {
		printf("n[%d]: ", i);
		scanf("%d", &a[i]);
		
	}

	printf("Buscar por: ");
	scanf("%d", &chave);
	
	posicao = buscar(a, 10, chave);
	if (posicao != -1) {
		printf("O valor %d foi encontrado na posicao %d.", chave, posicao);
	} else {
		printf("O valor %d nao foi encontrado.", chave);
		
	}


	return 0;
}

int buscar(const int *a, int n, int chave) {
	for (int i = 0; i < n; i++) {
		if (a[i] == chave) {
			return i;

		}
	}
	return -1;
}