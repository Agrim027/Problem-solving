//Given radius of a circle, find the area of largest possible rectangle which may be enclosed completely within it.

#include <stdio.h>
#include <math.h>

int main() {
    // Input: radius of the circle
    double radius;
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    // The diameter of the circle is twice the radius
    double diameter = 2 * radius;

    // The diagonal of the rectangle is equal to the diameter of the circle
    double diagonal = diameter;

    // The area of the rectangle is half the product of the diagonal and itself
    double area = 0.5 * pow(diagonal, 2);

    printf("The area of the largest possible rectangle is: %.2f\n", area);

    return 0;
}