#include <stdio.h>

int main(void)
{
    int L, R;
    int i, j;

    printf("Enter L and R: ");
    scanf("%d %d", &L, &R);

    for (i = L; i <= R; i++)
    {
        printf("Table of %d\n", i);

        for (j = 1; j <= 10; j++)
        {
            printf("%d x %d = %d\n", i, j, i * j);
        }

        printf("\n");   /* Blank line between tables */
    }

    return 0;
}