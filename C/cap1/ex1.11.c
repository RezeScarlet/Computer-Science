#include <stdio.h>
#include <stdlib.h>

int main() {
    int
    diagonalMaior,
    diagonalMenor;

    printf("Diagonal maior do losango: ");
    scanf("%d", &diagonalMaior);
    printf("Diagonal menor do losango: ");
    scanf("%d", &diagonalMenor);

    int
    area = diagonalMenor*diagonalMaior/2;

    printf("Area = %d", area);
    return 0;
}