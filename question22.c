#include <stdio.h>

int main(void)
{
    int n, reversed = 0, digit, original;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    original = n;

    while (n > 0)
    {
        digit = n % 10;            /* extract last digit */
        reversed = reversed * 10 + digit;
        n = n / 10;                /* remove last digit */
    }

    printf("Original number: %d\n", original);
    printf("Reversed number: %d\n", reversed);

    return 0;
}
