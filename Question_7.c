//Write a function to calculate the power of a number using recursion in C.

#include <stdio.h>

int power(int base, int exponent) {
    if (exponent == 0) {
        return 1;
    } else {
        return base * power(base, exponent - 1);
    }
}

int main() {
    int base, exponent;
    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    int result = power(base, exponent);
    printf("Result: %d\n", result);

    return 0;
}
