#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    scanf(" %c", &operator);
    printf("Enter two operands: ");
    scanf("%lf %lf", &num1, &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%.1f + %.1f = %.1f", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.1f - %.1f = %.1f", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.1f * %.1f = %.1f", num1, num2, result);
            break;
        case '/':
            result = num1 / num2;
            printf("%.1f / %.1f = %.1f", num1, num2, result);
            break;

        default:
            printf("Error. Invalid operation.\n");
    }

    return 0;
}