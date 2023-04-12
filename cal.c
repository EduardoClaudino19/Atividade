#include <stdio.h>

int main() {
    char op;
    float num1, num2, result;

    printf("Digite um operador (+, -, *, /): ");
    scanf("%c", &op);

    printf("Digite dois números: ");
    scanf("%f %f", &num1, &num2);

    switch(op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
            printf("Operador inválido!");
            return 0;
    }

    printf("%.2f %c %.2f = %.2f", num1, op, num2, result);

    return 0;
}
