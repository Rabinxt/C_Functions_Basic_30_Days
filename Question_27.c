//27. Implement a function to perform matrix addition in C.

#include <stdio.h>

// Function to perform matrix addition
void matrixAddition(int rows, int cols, int mat1[rows][cols], int mat2[rows][cols], int result[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

// Function to print a matrix
void printMatrix(int rows, int cols, int mat[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;

    // Input matrix dimensions
    printf("Enter the number of rows and columns of the matrices: ");
    scanf("%d %d", &rows, &cols);

    int matrix1[rows][cols], matrix2[rows][cols], result[rows][cols];

    // Input matrix elements for matrix 1
    printf("Enter the elements of matrix 1:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input matrix elements for matrix 2
    printf("Enter the elements of matrix 2:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Perform matrix addition
    matrixAddition(rows, cols, matrix1, matrix2, result);

    // Print matrices and result
    printf("\nMatrix 1:\n");
    printMatrix(rows, cols, matrix1);

    printf("\nMatrix 2:\n");
    printMatrix(rows, cols, matrix2);

    printf("\nResult of Matrix Addition:\n");
    printMatrix(rows, cols, result);

    return 0;
}
