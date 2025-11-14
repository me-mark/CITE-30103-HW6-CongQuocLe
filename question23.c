#include <stdio.h>

int main(void)
{
    int n;
    int positives = 0, negatives = 0, evens = 0, odds = 0;

    do
    {
        printf("Enter an integer (0 to stop): ");
        scanf("%d", &n);

        if (n != 0)
        {
            if (n > 0)
                positives++;
            else
                negatives++;

            if (n % 2 == 0)
                evens++;
            else
                odds++;
        }

    } while (n != 0);

    printf("Positive numbers: %d\n", positives);
    printf("Negative numbers: %d\n", negatives);
    printf("Even numbers: %d\n", evens);
    printf("Odd numbers: %d\n", odds);

    return 0;
}