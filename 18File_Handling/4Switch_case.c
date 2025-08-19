// Using Switch case create the calculater

#include <stdio.h>

int main() {
    int a, b;
    char op;

    // Input first number
    printf("Enter first number: ");
    scanf("%d", &a);

    // Input operator
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);  // Notice the space before %c

    // Input second number
    printf("Enter second number: ");
    scanf("%d", &b);

    // Switch case for operation
    switch (op) {
        case '+':
            printf("Result: %d\n", a + b);
            break;
        case '-':
            printf("Result: %d\n", a - b);
            break;
        case '*':
            printf("Result: %d\n", a * b);
            break;
        case '/':
            if (b != 0)
                printf("Result: %.2f\n", (float)a / b);
            else
                printf("Error: Division by zero is not allowed.\n");
            break;
        default:
            printf("Invalid syntax\n");
    }

    return 0;
}
