// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int dia;
  int mes;
  int ano;
} Data;

int diaDoAno(const Data *data);

int main() {
	Data data;

	printf("dia: ");
  scanf("%d", &data.dia);
  printf("mes: ");
  scanf("%d", &data.mes);
  printf("ano: ");
  scanf("%d", &data.ano);

	printf("\nO dia do ano da data %02d/%02d/%04d eh %d.", data.dia, data.mes, data.ano, diaDoAno(&data));
	
	return 0;
}

int diaDoAno(const Data *data) {
	int diaDoAno = 0;
	int diasPorMes[12] = {31, (data->ano % 400 == 0 || data->ano % 4 ==0)? 29 : 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	for (int i = 0; i < data->mes-1; i++) {
		diaDoAno+=diasPorMes[i];
	}
	diaDoAno+=data->dia;
	return diaDoAno;
}