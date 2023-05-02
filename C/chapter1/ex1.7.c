#include <stdio.h>
#include <stdlib.h>

int main() {
    int lado;

    printf("Lado do quadrado: ");
    scanf("%d", &lado);

    int 
    perimetro = lado*4,
    area = lado*lado;

    printf("Perimetro = %d\nArea = %d", perimetro, area);
    return 0;
}