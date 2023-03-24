#include <stdio.h>
#include <stdlib.h>

int main() {
    float lado;

    printf("Lado do quadrado: ");
    scanf("%f", &lado);

    float 
    perimetro = lado*4,
    area = lado*lado;

    printf("Perimetro: %.2f\nArea: %.2f", perimetro, area);
    return 0;
}