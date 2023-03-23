#include <stdio.h>
#include <stdlib.h>

int main() {
    float
    diagonalMaior,
    diagonalMenor;

    printf("Diagonal maior do losango: ");
    scanf("%f", &diagonalMaior);
    printf("Diagonal menor do losango: ");
    scanf("%f", &diagonalMenor);

    float
    area = diagonalMenor*diagonalMaior/2;

    printf("Area: %.2f", area);
    return 0;
}