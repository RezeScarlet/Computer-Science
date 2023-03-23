#include <stdio.h>
#include <stdlib.h>

int main() {
    float 
    n1,
    n2;

    printf("Primeiro Número: ");
    scanf("%f", &n1);
    printf("Segunda Número: ");
    scanf("%f", &n2);
    
    float 
    sum = n1+n2,
    sub = n1-n2,
    mul = n1*n2,
    div = n1/n2;

    printf("%.2f + %.2f = %.2f \n", n1, n2, sum);
    printf("%.2f - %.2f = %.2f \n", n1, n2, sub);
    printf("%.2f * %.2f = %.2f \n", n1, n2, mul);
    printf("%.2f / %.2f = %.2f \n", n1, n2, div);
    return 0;
}