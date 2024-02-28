//5. Create a function to reverse a given integer in C.

#include<stdio.h>

int reverse(int number) {
    int rev = 0;
    while (number != 0) {
        rev = rev * 10 + number % 10;
        number = number / 10;
    }
    return rev;
}

int main() {
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);

    int reversed = reverse(number);
    printf("Reversed number: %d\n", reversed);

    return 0;
}
