// Day 39
// Q77 and Q78 Combined Code

#include <stdio.h>

// Q77: Check if the elements on the diagonal of a matrix are distinct
void checkDistinctDiagonal() {
    int n, m;
    printf("Q77 Input: Enter rows and columns of matrix: ");
    scanf("%d %d", &n, &m);

    int matrix[n][m];
    printf("Enter elements of matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Checking distinct diagonal elements
    int isDistinct = 1;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                isDistinct = 0;
                break;
            }
        }
        if (!isDistinct) break;
    }

    printf("Q77 Output:\n");
    if (isDistinct)
        printf("True\n");
    else
        printf("False\n");
    printf("\n");
}

// Q78: Find the sum of main diagonal elements for a square matrix
void sumOfDiagonal() {
    int n, m;
    printf("Q78 Input: Enter rows and columns of matrix: ");
    scanf("%d %d", &n, &m);

    if (n != m) {
        printf("Matrix must be square to find main diagonal sum.\n\n");
        return;
    }

    int matrix[n][m];
    printf("Enter elements of matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += matrix[i][i];
    }

    printf("Q78 Output:\n");
    printf("%d\n", sum);
}

int main() {
    checkDistinctDiagonal();
    sumOfDiagonal();
    return 0;
}

/*
Sample Test Cases:

Q77:
Input:
3 3
1 2 3
4 5 6
7 8 1
Output:
False

Input:
3 3
1 2 3
4 5 6
7 8 9
Output:
True

Q78:
Input:
3 3
1 2 3
4 5 6
7 8 9
Output:
15
*/
