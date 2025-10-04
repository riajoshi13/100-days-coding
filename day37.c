// Day 37
// Q73 and Q74 Combined Code

#include <stdio.h>

// Q73: Find the sum of each row of a matrix and store it in an array
void sumOfEachRow() {
    int rows, cols;
    printf("Q73 Input: Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols], rowSum[rows];

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        rowSum[i] = 0;
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            rowSum[i] += matrix[i][j];
        }
    }

    printf("Q73 Output:\n");
    for (int i = 0; i < rows; i++) {
        printf("%d ", rowSum[i]);
    }
    printf("\n\n");
}

// Q74: Find the transpose of a matrix
void transposeMatrix() {
    int rows, cols;
    printf("Q74 Input: Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols], transpose[cols][rows];

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Transposing the matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    printf("Q74 Output:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
}

int main() {
    sumOfEachRow();
    transposeMatrix();
    return 0;
}

/*
Sample Test Cases:

Q73:
Input:
2 3
1 2 3
4 5 6
Output:
6 15

Q74:
Input:
2 3
1 2 3
4 5 6
Output:
1 4
2 5
3 6
*/
