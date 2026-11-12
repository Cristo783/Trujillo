// Cristobal Trujillo
// CSC60
#include <stdio.h>
#include <math.h>

// function used in the program
double area(double a, double b);

int main(void) {
    double a, b, c, triangleArea;

    // asks the user for the two sides of the right triangle
    printf("Enter a number for side a: ");
    scanf("%lf", &a);
    printf("Enter a number for side b: ");
    scanf("%lf", &b);

    // calculates and rounds the hypotenuse using the pythagorean theorem
    c = round(sqrt(pow(a, 2) + pow(b, 2)));

    // calls the area function to calculate the area 
    // the function is in the area.c file 
    triangleArea = area(a, b);

    // displays the hypotenuse and area of the triangle
    printf("The hypotenuse of the triangle is: %.0f\n", c);
    printf("The area of the triangle is: %.2f\n", triangleArea);

    return 0;
}