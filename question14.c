#include <stdio.h>

int main(void)
{
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    (n > 0) ? printf("Positive\n") :
    (n < 0) ? printf("Negative\n") :
    printf("Zero\n");

    return 0;
}
