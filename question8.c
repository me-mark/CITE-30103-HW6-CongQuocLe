#include <stdio.h>

/* Global variable */
int globalValue = 100;

int main(void)
{
    /* Local variable */
    int localValue = 50;

    printf("Global value: %d\n", globalValue);
    printf("Local value: %d\n", localValue);

    return 0;
}