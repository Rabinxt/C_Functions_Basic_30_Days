// Create a function to concatenate two strings in C.
#include <stdio.h>
#include <string.h>

void concatenateStrings(char* destination, const char* source) {
    strcat(destination, source);
}

int main() {
    char str1[50] = "Hello, ";
    const char* str2 = "world!";
    
    concatenateStrings(str1, str2);
    
    printf("Concatenated string: %s\n", str1);

    return 0;
}
