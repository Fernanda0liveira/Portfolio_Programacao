#include <stdio.h>
int main() { 

    int codigo1, quant1, codigo2, quant2;
    float valor1, valor2, prod1, prod2;

    scanf("%d %d %f", &codigo1, &quant1, &valor1);
    scanf("%d %d %f", &codigo2, &quant2, &valor2);
    prod1 = quant1 * valor1;
    prod2 = quant2 * valor2;
    
    printf("VALOR A PAGAR = R$ %.2f\n", prod1 + prod2);
    return 0;
