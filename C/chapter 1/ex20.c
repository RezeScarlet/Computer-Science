#include <stdio.h>
#include <stdlib.h>

int main() {
    int
    n1,
    n2,
    resultado;

    printf("Primeiro numero: ");
    scanf("%d", &n1);

    printf("Segundo numero: ");
    scanf("%d", &n2);

    resultado = (n1+n2)/2;

    printf("Média aritmetica: %d", resultado);
    return 0;
}