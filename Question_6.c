#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverseString(char* str) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

void palindrome(char* string) {
    char* temp = strdup(string); // Create a copy of the string to avoid modifying the original
    reverseString(temp);
    if (strcmp(string, temp) == 0) {
        printf("The given string is palindrome\n");
    } else {
        printf("The given string is not palindrome\n");
    }
    free(temp); // Free the dynamically allocated memory
}

int main() {
    char string[20];
    printf("Enter the string: ");
    scanf("%s", string); // Note the semicolon here

    palindrome(string);
    return 0;
}
