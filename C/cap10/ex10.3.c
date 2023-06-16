// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int hora;
	int minuto;
	int segundo;
} Hora;

Hora gerarHora(int quantidadeSegundos);

void imprimirHora(const Hora *hora);

int main() {
	int segundos;
	Hora hora;

	printf("Segundos: ");
	scanf("%d", &segundos);

	hora = gerarHora(segundos);

	printf("\nHora correspondente: ");
	imprimirHora(&hora);
	
	return 0;
}

Hora gerarHora(int quantidadeSegundos) {
	Hora hora = {
	.hora = quantidadeSegundos/3600,
	.minuto = (quantidadeSegundos%3600) / 60,
	.segundo = quantidadeSegundos % 60

	};

	return hora;
}

void imprimirHora(const Hora *hora){
	printf("%02d:%02d:%02d", hora->hora, hora->minuto, hora->segundo);
	
}