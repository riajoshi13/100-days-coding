// Day 36
// Q71 and Q72 Combined Code

#include <stdio.h>

// Q71: Read and print a matrix
void readAndPrintMatrix() {
    int rows, cols;
    printf("Q71 Input: Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Q71 Output:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

// Q72: Find the sum of all elements in a matrix
void sumOfMatrixElements() {
    int rows, cols;
    printf("Q72 Input: Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    int sum = 0;

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }

    printf("Q72 Output: %d\n", sum);
}

int main() {
    readAndPrintMatrix();
    sumOfMatrixElements();
    return 0;
}

/*
Sample Test Cases:

Q71:
Input:
2 2
1 2
3 4
Output:
1 2
3 4

Q72:
Input:
2 3
1 2 3
4 5 6
Output:
21
*/
