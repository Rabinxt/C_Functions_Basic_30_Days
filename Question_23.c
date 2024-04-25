//23. Create a function to check if two strings are anagrams in C.

#include <stdio.h>
#include <string.h>

#define MAX_CHARS 256

// Function to check if two strings are anagrams
int areAnagrams(const char* str1, const char* str2) {
    // Create an array to store the count of characters in str1
    int count[MAX_CHARS] = {0};

    // Lengths of both strings
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    // If lengths are different, they cannot be anagrams
    if (len1 != len2) return 0;

    // Increment count of characters in str1
    for (int i = 0; i < len1; i++) {
        count[str1[i]]++;
    }

    // Decrement count of characters in str2
    for (int i = 0; i < len2; i++) {
        count[str2[i]]--;
    }

    // If all counts are zero, the strings are anagrams
    for (int i = 0; i < MAX_CHARS; i++) {
        if (count[i] != 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    const char* str1 = "listen";
    const char* str2 = "silent";

    if (areAnagrams(str1, str2)) {
        printf("%s and %s are anagrams.\n", str1, str2);
    } else {
        printf("%s and %s are not anagrams.\n", str1, str2);
    }

    return 0;
}
