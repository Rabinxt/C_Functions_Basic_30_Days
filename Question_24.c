//24. Implement a function to convert a decimal number to binary in C.

#include <stdio.h>

void decimalToBinary(int decimal) {
    // Array to store binary digits
    int binary[32];
    int i = 0;
    
    // Convert decimal to binary
    while (decimal > 0) {
        binary[i++] = decimal % 2;
        decimal /= 2;
    }
    
    // Print binary representation in reverse order
    printf("Binary representation: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

int main() {
    int decimal;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    decimalToBinary(decimal);
    return 0;
}
