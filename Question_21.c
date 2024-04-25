//21. Implement a function to reverse a string in C without using any library function.

#include <stdio.h>

// Function to reverse a string
void reverseString(char* str) {
    // Find the length of the string
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    // Swap characters from start and end of the string
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main() {
    char str[] = "Hello, World!";
    printf("Original string: %s\n", str);

    // Reverse the string
    reverseString(str);
    
    printf("Reversed string: %s\n", str);
    
    return 0;
}
