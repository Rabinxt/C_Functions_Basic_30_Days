//16. Write a C function to count the number of vowels in a string.

#include <stdio.h>

int countVowels(char *str) {
    int count = 0;
    while (*str) {
        switch (*str) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                count++;
                break;
            default:
                break;
        }
        str++;
    }
    return count;
}

int main() {
    char str[] = "Hello World";
    int vowelCount = countVowels(str);
    printf("Number of vowels in the string: %d\n", vowelCount);
    return 0;
}
