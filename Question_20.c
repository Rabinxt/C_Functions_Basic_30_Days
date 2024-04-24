//20. Create a C function to find the length of a string.

#include <stdio.h>

int stringLength(const char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    const char *text = "Hello, World!";
    int length = stringLength(text);
    printf("Length of the string is: %d\n", length);
    return 0;
}
