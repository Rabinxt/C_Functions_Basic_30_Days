// Create a function to find the GCD (Greatest Common Divisor) of two numbers in C.

#include <stdio.h>

int gcd(int a, int b) {
    // Base case: if b is 0, the GCD is a
    if (b == 0)
        return a;
    // Recursive case: call gcd with b and the remainder of a divided by b
    return gcd(b, a % b);
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Call the gcd function with the two numbers
    int result = gcd(num1, num2);

    printf("GCD of %d and %d is %d\n", num1, num2, result);

    return 0;
}
