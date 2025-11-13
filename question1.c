/*********************************************
 *  Program: Rectangle Area & Perimeter
 *  Author: Cong Quoc Le
 *  Description:
 *     This program prompts the user to enter
 *     the length and width of a rectangle.
 *     It then calculates and displays the
 *     area and perimeter.
 *********************************************/

/*--------------- Link Section ---------------*/
#include <stdio.h>

/*------------- Definition Section ------------*/
#define TRUE 1   // example constant (not required but included for section completeness)

/*----------------- Main Section --------------*/
int main(void)
{
    /*----- Variable Declarations -----*/
    double length, width;
    double area, perimeter;

    /*----- Input Section -----*/
    printf("Enter the length of the rectangle: ");
    scanf("%lf", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%lf", &width);

    /*----- Calculation Section -----*/
    area = length * width;
    perimeter = 2 * (length + width);

    /*----- Output Section -----*/
    printf("\n--- Rectangle Results ---\n");
    printf("Area: %.2f\n", area);
    printf("Perimeter: %.2f\n", perimeter);

    return 0;
}
