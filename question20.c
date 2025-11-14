#include <stdio.h>

int main(void)
{
    int n;
    int count = 0;

    do
    {
        printf("Enter an integer (0 to stop): ");
        scanf("%d", &n);

        if (n != 0)
        {
            count++;
        }

    } while (n != 0);

    printf("Total numbers entered: %d\n", count);

    return 0;
}
