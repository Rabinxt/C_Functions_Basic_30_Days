// Implement a function to calculate the sum of elements in an array in C.

#include <stdio.h>

// Function to calculate the sum of elements in an array
int arraySum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int sum = arraySum(arr, size);
    printf("Sum of elements in the array: %d\n", sum);

    return 0;
}
