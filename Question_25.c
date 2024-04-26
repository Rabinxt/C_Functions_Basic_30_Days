//25. Write a C function to remove all spaces from a string.

#include <stdio.h>
#include <string.h>

void removeSpaces(char *str) {
    int count = 0;
    for (int i = 0; str[i]; i++) {
        if (str[i] != ' ') {
            str[count++] = str[i];
        }
    }
    str[count] = '\0';
}

int main() {
    char str[100];
    printf("Enter a string with spaces: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character added by fgets
    str[strcspn(str, "\n")] = '\0';

    removeSpaces(str);
    printf("String after removing spaces: %s\n", str);
    return 0;
}
