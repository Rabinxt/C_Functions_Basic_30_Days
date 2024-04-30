//28. Write a function to calculate the area of a circle given its radius in C.

#include <stdio.h>

// Function to calculate the area of a circle
double calculateCircleArea(double radius) {
    const double pi = 3.14159; // Approximation of pi
    double area;

    area = pi * radius * radius;

    return area;
}

int main() {
    double radius;
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    // Calculate the area using the function
    double area = calculateCircleArea(radius);
    printf("The area of the circle with radius %.2lf is %.2lf\n", radius, area);

    return 0;
}
