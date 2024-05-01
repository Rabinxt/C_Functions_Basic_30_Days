//29. Create a C function to generate the nth Fibonacci number using memoization.

#include <stdio.h>

#define MAX 100
#define NIL -1

int memo[MAX];

// Initialize memoization table with NIL
void initialize() {
    int i;
    for (i = 0; i < MAX; i++)
        memo[i] = NIL;
}

// Fibonacci function with memoization
int fibonacci(int n) {
    if (memo[n] == NIL) {
        if (n <= 1)
            memo[n] = n;
        else
            memo[n] = fibonacci(n - 1) + fibonacci(n - 2);
    }
    return memo[n];
}

int main() {
    int n;

    // Initialize memoization table
    initialize();

    // Input the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Print the nth Fibonacci number
    printf("The %dth Fibonacci number is: %d\n", n, fibonacci(n));

    return 0;
}
