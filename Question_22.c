//22. Write a function to find the sum of digits of a given number in C.
#include <stdio.h>

// Function to find the sum of digits of a given number
int sumOfDigits(int number) {
    int sum = 0;

    // Iterate through each digit of the number
    while (number != 0) {
        // Extract the last digit
        int digit = number % 10;
        // Add the digit to the sum
        sum += digit;
        // Remove the last digit from the number
        number /= 10;
    }

    return sum;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    // Calculate the sum of digits
    int sum = sumOfDigits(number);

    printf("Sum of digits of %d is %d\n", number, sum);

    return 0;
}
