//Implement a function to convert a string to lowercase in C.

#include <stdio.h>

void toLowercase(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        // Check if the character is uppercase
        if (str[i] >= 'A' && str[i] <= 'Z') {
            // Convert uppercase to lowercase by adding the ASCII offset
            str[i] = str[i] + ('a' - 'A');
        }
        i++;
    }
}

int main() {
    char str[] = "Hello World";
    printf("Original string: %s\n", str);
    
    toLowercase(str);
    
    printf("String in lowercase: %s\n", str);
    
    return 0;
}
