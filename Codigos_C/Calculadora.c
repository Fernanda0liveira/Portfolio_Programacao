#include <stdio.h>
#include <math.h>

int main() {
    int X, Y;
    char operacao;
    float resultado;
    char d; // To consume the newline character

    printf("Digite dois inteiros: ");
    scanf("%d %d", &X, &Y);
    scanf("%c", &d); // Consume the newline character left by scanf

    printf("Digite a operacao (+, -, *, /): ");
    scanf("%c", &operacao);

    switch (operacao)
    {
    case '+':
        resultado = X + Y;
        printf("Resultado: %.2f\n", resultado);
        break;
    case '-':
        resultado = X - Y;
        printf("Resultado: %.2f\n", resultado);
        break;
    case '*':
        resultado = X * Y;
        printf("Resultado: %.2f\n", resultado);
        break;
    case '/':
        if (Y != 0) {
            resultado =(float)X / Y;
            printf("Resultado: %.2f\n", resultado);
        } else {
            printf("Erro: Divisão por zero!\n");
        }
        break;
    default:
        printf("Operacao invalida!\n");
        break;
    }
    return 0;
}
