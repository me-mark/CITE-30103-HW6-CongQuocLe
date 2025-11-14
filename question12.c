#include <stdio.h>

void main() {
    int a = 5, b = 3;
    int res0 = a + b << 1;
    int res1 = a + (b << 1);
    int res2 = a + b*2;

    printf("Wrong expression: res0 = a + b << 1 = %d", res0);
    printf("\nBy parrenthesis: res1 = a + (b << 1) = %d", res1);
    printf("\nBy arithmetic: res2 = a + b*2 = %d \n", res2);
}