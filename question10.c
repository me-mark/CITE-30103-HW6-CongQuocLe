#include <stdio.h>

int main(void)
{
    char c;
    int i;
    long int li;
    float f;
    double d;

    printf("Size of variable c: %lu bytes\n", sizeof(c));
    printf("Size of variable i: %lu bytes\n", sizeof(i));
    printf("Size of variable li: %lu bytes\n", sizeof(li));
    printf("Size of variable f: %lu bytes\n", sizeof(f));
    printf("Size of variable d: %lu bytes\n", sizeof(d));

    return 0;
}
