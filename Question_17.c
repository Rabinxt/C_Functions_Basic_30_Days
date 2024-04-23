//17. Create a function to generate a random number within a given range in C.
#include <stdio.h>

// Function to generate a random number within a given range
int generateRandomNumber(int min, int max) {
    // Prompt the user to enter a seed
    printf("Enter a seed: ");
    unsigned int seed;
    scanf("%u", &seed);

    // Ensure min is less than max
    if (min >= max)
        return min;

    // Generate a pseudo-random number using a simple algorithm
    seed = (seed * 1103515245 + 12345) % 2147483648;
    int randomNumber = min + (seed % (max - min + 1));

    return randomNumber;
}

int main() {
    // Define the range
    int minRange = 10;
    int maxRange = 20;

    // Generate and print random numbers
    for (int i = 0; i < 10; ++i) {
        int randomNumber = generateRandomNumber(minRange, maxRange);
        printf("%d\n", randomNumber);
    }

    return 0;
}
