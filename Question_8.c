//Create a C function to find the Fibonacci series up to a given limit.

#include <stdio.h>

void fibonacciSeries(int limit) {
    int first = 0, second = 1, next;
    
    printf("Fibonacci Series up to %d terms:\n", limit);

    for (int i = 0; i < limit; ++i) {
        if (i <= 1)
            next = i;
        else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d, ", next);
    }
    printf("\n");
}

int main() {
    int limit;

    printf("Enter the limit for Fibonacci series: ");
    scanf("%d", &limit);

    fibonacciSeries(limit);

    return 0;
}
