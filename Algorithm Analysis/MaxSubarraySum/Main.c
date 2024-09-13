// Elaborado por
// Guilherme de Souza Dionisio Rosseti
// Samuel Oliveira Lopes
// Yago Miguel Nunes
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void FindMaxCrossingSubarray(int A[], int inicio, int meio, int fim,
                             int *maxEsquerda, int *maxDireita, int *somaMax);

void FindMaxSubarray(int A[], int inicio, int fim, int *inicioMax, int *fimMax,
                     int *somaMax);

struct Shares {
  char name[6];
  int assets[30];
  int assetsVariation[30];
};

int main() {
  int beginning;
  int end;
  int value;
  struct Shares shares[5];
  FILE *file = fopen("ativos.txt", "r");
  const char delimiter[] = "; ";
  char buffer[1024];
  char *token;
  for (int i = 0; i < 5; i++) {
    fgets(buffer, sizeof(buffer), file);

    buffer[strcspn(buffer, "\n")] = 0;
    token = strtok(buffer, delimiter);
    strcpy(shares[i].name, token);
    printf("\n\n== %s ==\n", shares[i].name);
    printf("Ativos:");
    shares[i].assetsVariation[0] = 0;
    for (int j = 0; j < 30; j++) {
      token = strtok(NULL, delimiter);
      shares[i].assets[j] = atoi(token);
      if (j > 0) {
        shares[i].assetsVariation[j] =
            shares[i].assets[j] - shares[i].assets[j - 1];
        printf("%d, ", shares[i].assetsVariation[j]);
      }
    }
    FindMaxSubarray((shares[i].assetsVariation), 0, 29, &beginning, &end, &value);
    printf("\nMelhor Periodo:\n Inicio:%d\n Fim:%d\n Valor Total:%d", beginning,
           end, value);
  }

  fclose(file);
  return 0;
}

void FindMaxCrossingSubarray(int A[], int inicio, int meio, int fim,
                             int *maxEsquerda, int *maxDireita, int *somaMax) {
  int somaEsquerda = INT_MIN;
  int somaDireita = INT_MIN;
  int soma = 0;

  for (int i = meio; i >= inicio; i--) {
    soma += A[i];
    if (soma > somaEsquerda) {
      somaEsquerda = soma;
      *maxEsquerda = i;
    }
  }

  soma = 0;

  for (int j = meio + 1; j <= fim; j++) {
    soma += A[j];
    if (soma > somaDireita) {
      somaDireita = soma;
      *maxDireita = j;
    }
  }

  *somaMax = somaEsquerda + somaDireita;
}

void FindMaxSubarray(int A[], int inicio, int fim, int *inicioMax, int *fimMax,
                     int *somaMax) {
  if (inicio == fim) {
    *inicioMax = inicio;
    *fimMax = fim;
    *somaMax = A[inicio];
  } else {
    int meio = (inicio + fim) / 2;

    int inicioEsquerda, fimEsquerda, somaEsquerda;
    FindMaxSubarray(A, inicio, meio, &inicioEsquerda, &fimEsquerda,
                    &somaEsquerda);

    int inicioDireita, fimDireita, somaDireita;
    FindMaxSubarray(A, meio + 1, fim, &inicioDireita, &fimDireita,
                    &somaDireita);

    int inicioCruzado, fimCruzado, somaCruzado;
    FindMaxCrossingSubarray(A, inicio, meio, fim, &inicioCruzado, &fimCruzado,
                            &somaCruzado);

    if (somaEsquerda >= somaDireita && somaEsquerda >= somaCruzado) {
      *inicioMax = inicioEsquerda;
      *fimMax = fimEsquerda;
      *somaMax = somaEsquerda;
    } else if (somaDireita >= somaEsquerda && somaDireita >= somaCruzado) {
      *inicioMax = inicioDireita;
      *fimMax = fimDireita;
      *somaMax = somaDireita;
    } else {
      *inicioMax = inicioCruzado;
      *fimMax = fimCruzado;
      *somaMax = somaCruzado;
    }
  }
}
