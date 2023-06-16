#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int dia;
  int mes;
  int ano;
} Data;

int compararData(const Data *d1, const Data *d2);

void imprimirData(const Data *data);

int main() {
  Data d1;
  Data d2;

  printf("Data 1");

  printf("\n\tdia: ");
  scanf("%d", &d1.dia);
  printf("\tmes: ");
  scanf("%d", &d1.mes);
  printf("\tano: ");
  scanf("%d", &d1.ano);
 
  printf("Data 2");

  printf("\n\tdia: ");
  scanf("%d", &d2.dia);
  printf("\tmes: ");
  scanf("%d", &d2.mes);
  printf("\tano: ");
  scanf("%d", &d2.ano);

  printf("\n");
  
  
  if (compararData(&d1, &d2) < 0) {
    imprimirData(&d1);
    printf(" <= ");
    imprimirData(&d2);

    return 0;
  }

  imprimirData(&d2);
  printf(" <= ");
  imprimirData(&d1);
 
  return 0;
}

int compararData(const Data *d1, const Data *d2) {
  if (d1->ano < d2->ano) {
    return -1;

  } else if (d1->ano == d2->ano) {
    if (d1->mes < d2->mes) {
      return -1;

    } else if (d1->mes == d2->mes && d1->dia < d2->dia) {
      return -1;
    }
  }
  return 1;
}

void imprimirData(const Data *data) {
  printf("%02d/%02d/%02d", data->dia, data->mes, data->ano);
  
}
