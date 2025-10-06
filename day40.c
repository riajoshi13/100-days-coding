// Day 40
// Q79 and Q80 Combined Code

#include <stdio.h>

// Q79: Perform diagonal traversal of a matrix
void diagonalTraversal() {
    int n, m;
    printf("Q79 Input: Enter rows and columns of matrix: ");
    scanf("%d %d", &n, &m);

    int a[n][m];
    printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Q79 Output:\n");
    // Traverse diagonals starting from the first column
    for (int k = 0; k < n; k++) {
        int i = k, j = 0;
        while (i >= 0 && j < m) {
            printf("%d ", a[i][j]);
            i--;
            j++;
        }
    }

    // Traverse diagonals starting from the second row
    for (int k = 1; k < m; k++) {
        int i = n - 1, j = k;
        while (i >= 0 && j < m) {
            printf("%d ", a[i][j]);
            i--;
            j++;
        }
    }
    printf("\n\n");
}

// Q80: Multiply two matrices
void multiplyMatrices() {
    int r1, c1, r2, c2;
    printf("Q80 Input: Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("Matrix multiplication not possible. Columns of first must equal rows of second.\n");
        return;
    }

    int a[r1][c1], b[r2][c2], result[r1][c2];

    printf("Enter first matrix elements:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter second matrix elements:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Initialize result matrix to 0
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
        }
    }

    // Multiply matrices
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Q80 Output:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}

int main() {
    diagonalTraversal();
    multiplyMatrices();
    return 0;
}

/*
Sample Test Cases:

Q79:
Input:
3 3
1 2 3
4 5 6
7 8 9
Output:
1 2 4 7 5 3 6 8 9

Q80:
Input:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output:
58 64
139 154
*/
