#include <stdio.h>
#include <stdlib.h>

int main() {
    float n;
    printf("Número decimal: ");
    scanf("%f", &n);

    printf("%f\n", n);
    printf("%.2f\n", n);
    printf("%.3f", n);
    return 0;
}
