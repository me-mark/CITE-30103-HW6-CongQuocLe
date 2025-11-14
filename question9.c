#include <stdio.h>

int main(void)
{
    int a = 7;
    int b = 2;

    /* Integer division */
    int intResult = a / b;

    /* Floating-point division (implicit cast because one operand is float) */
    float implicitResult = a / 2.0f;

    /* Floating-point division (explicit cast) */
    float explicitResult = (float)a / b;

    printf("Integer division: %d\n", intResult);
    printf("Floating point (implicit cast): %.2f\n", implicitResult);
    printf("Floating point (explicit cast): %.2f\n", explicitResult);

    return 0;
}
