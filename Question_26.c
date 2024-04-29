//26. Create a function to check if a given string contains only digits in C.

#include <stdio.h>

int containsOnlyDigits(const char *str) {
    while (*str) {
        if (*str < '0' || *str > '9') {
            return 0;
        }
        str++;
    }
    return 1;
}

int main() {
    const char *test1 = "12345"; // contains only digits
    const char *test2 = "abc123"; // contains characters other than digits

    if (containsOnlyDigits(test1)) {
        printf("%s contains only digits\n", test1);
    } else {
        printf("%s does not contain only digits\n", test1);
    }

    if (containsOnlyDigits(test2)) {
        printf("%s contains only digits\n", test2);
    } else {
        printf("%s does not contain only digits\n", test2);
    }

    return 0;
}
