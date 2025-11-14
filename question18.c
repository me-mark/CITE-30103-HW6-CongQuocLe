#include <stdio.h>

int main(void)
{
    double a, b;
    char op;

    printf("Enter expression (a operator b): ");
    scanf("%lf %c %lf", &a, &op, &b);

    switch (op)
    {
        case '+':
            printf("Result: %.2f\n", a + b);
            break;

        case '-':
            printf("Result: %.2f\n", a - b);
            break;

        case '*':
            printf("Result: %.2f\n", a * b);
            break;

        case '/':
            if (b == 0)
                printf("Error: division by zero is not allowed\n");
            else
                printf("Result: %.2f\n", a / b);
            break;

        default:
            printf("Invalid operator\n");
    }

    return 0;
}
