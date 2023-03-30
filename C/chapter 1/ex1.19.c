#include <stdio.h>
#include <stdlib.h>

int main() {
    float
    raio,
    𝝅 = 3.141592;

    printf("Raio do circulo: ");
    scanf("%f", &raio);

    float
    diametro = 2*raio,
    circunferencia = 2 * 𝝅 * raio,
    area = 𝝅 * raio*raio;




    printf("Diametro = %.2f\nCircunferencia = %.2f\nArea = %.2f", diametro, circunferencia, area);
    return 0;
}