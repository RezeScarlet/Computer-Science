#include <stdio.h>
#include <stdlib.h>

int main() {
    float
    raio,
    pi = 3.141592;

    printf("Raio do circulo: ");
    scanf("%f", &raio);

    float
    diametro = 2*raio,
    circunferencia = 2 * pi * raio,
    area = pi * raio*raio;




    printf("Diametro = %.2f\nCircunferencia = %.2f\nArea = %.2f", diametro, circunferencia, area);
    return 0;
}