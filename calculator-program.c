#include <stdio.h>

int main() {
    int num1, num2, result;
    char operation;

    printf("Enter operation (+, -, *, /): \n");
    scanf(" %c", &operation);

    printf("Enter two numbers: \n");
    scanf("%d %d", &num1, &num2);

    switch (operation) {
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
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error: Division by zero\n");
                return 1;
            }
            break;
        default:
            printf("Error: Invalid operation\n");
            return 1;
    }

    printf("Result: %d\n", result);

    return 0;
}
