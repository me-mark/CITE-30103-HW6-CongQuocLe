#include <stdio.h>

#define PI 3.14159

int main(void)
{
    const double PI_CONST = 3.14159;
    double radius;
    double area1, circ1; 
    double area2, circ2;

    printf("Enter radius: ");
    scanf("%lf", &radius);

    /* Using the define version of PI */
    area1 = PI * radius * radius;
    circ1 = 2 * PI * radius;

    /* Using the const version of PI */
    area2 = PI_CONST * radius * radius;
    circ2 = 2 * PI_CONST * radius;

    printf("Using define:\n");
    printf("Area: %.2f\n", area1);
    printf("Circumference: %.2f\n\n", circ1);

    printf("Using const:\n");
    printf("Area: %.2f\n", area2);
    printf("Circumference: %.2f\n", circ2);

    return 0;
}