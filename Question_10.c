//Write a C function to find the average of elements in an array.

#include <stdio.h>

// Function to calculate the average of elements in an array
double arrayAverage(int arr[], int size) {
    double sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum / size;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    double average = arrayAverage(arr, size);
    printf("Average of elements in the array: %.2f\n", average);

    return 0;
}

