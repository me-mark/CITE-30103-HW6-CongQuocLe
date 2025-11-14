#include <stdio.h>

int main(void)
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if ( (n % 2 == 0) && (n % 3 == 0) && (n % 7 != 0) )
    {
        printf("The number meets the condition.\n");
    }
    else
    {
        printf("The number does not meet the condition.\n");
    }

    return 0;
}
