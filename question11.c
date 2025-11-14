#include <stdio.h>

int main(void)
{
    int a, b;

    printf("Enter first integer: ");
    scanf("%d", &a);

    printf("Enter second integer: ");
    scanf("%d", &b);

    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);

    /* Check division and remainder for zero divisor */
    if (b != 0)
    {
        printf("Division: %d\n", a / b);
        printf("Remainder: %d\n", a % b);
    }
    else
    {
        printf("Division: undefined (cannot divide by zero)\n");
        printf("Remainder: undefined (cannot divide by zero)\n");
    }

    return 0;
}
