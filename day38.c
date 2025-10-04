// Day 38
// Q75 and Q76 Combined Code

#include <stdio.h>

// Q75: Add two matrices
void addTwoMatrices() {
    int rows1, cols1, rows2, cols2;
    printf("Q75 Input: Enter rows and columns of first matrix: ");
    scanf("%d %d", &rows1, &cols1);

    int matrix1[rows1][cols1];
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &rows2, &cols2);

    if (rows1 != rows2 || cols1 != cols2) {
        printf("Matrices cannot be added (different dimensions)\n\n");
        return;
    }

    int matrix2[rows2][cols2], sum[rows1][cols1];
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Adding both matrices
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("Q75 Output:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

// Q76: Check if a matrix is symmetric
void checkSymmetricMatrix() {
    int n;
    printf("Q76 Input: Enter the size of square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];
    printf("Enter elements of matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int isSymmetric = 1; // Assume true
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
    }

    printf("Q76 Output:\n");
    if (isSymmetric)
        printf("True\n");
    else
        printf("False\n");
}

int main() {
    addTwoMatrices();
    checkSymmetricMatrix();
    return 0;
}

/*
Sample Test Cases:

Q75:
Input:
2 2
1 2
3 4
2 2
5 6
7 8
Output:
6 8
10 12

Q76:
Input:
2 2
1 2
2 1
Output:
True

Input:
2 2
1 0
2 1
Output:
False
*/
