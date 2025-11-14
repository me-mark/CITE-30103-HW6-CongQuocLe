#include <stdio.h>

int main(void)
{
    int i;
    int count = 0;

    for (i = 1; i <= 50; i++)
    {
        /* Stop completely at 40 */
        if (i == 40)
            break;

        /* Skip multiples of 5 */
        if (i % 5 == 0)
            continue;

        printf("%d ", i);
        count++;
    }

    printf("\nTotal numbers displayed: %d\n", count);

    return 0;
}