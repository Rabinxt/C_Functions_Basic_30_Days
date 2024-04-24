//19. Write a function to calculate the square root of a given number using Newton's method in C.
#include <stdio.h>

double squareRoot(double x) {
    double guess = x / 2.0; // Initial guess
    double epsilon = 0.00001; // Threshold for convergence

    while ((guess * guess - x) > epsilon || (x - guess * guess) > epsilon) {
        guess = (guess + x / guess) / 2.0; // Newton's method
    }

    return guess;
}

int main() {
    double num = 25.0; // Example number to find square root
    printf("Square root of %.2f is: %.5f\n", num, squareRoot(num));
    return 0;
}
