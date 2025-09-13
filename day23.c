#include <stdio.h>

int main() {
    int choice;
    printf("Day 23 Programs\n");
    printf("1. Find sum of series (2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms)\n");
    printf("2. Print the star pattern\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        // Q45: Series sum
        int n;
        float sum = 0.0;
        printf("Enter number of terms (n): ");
        scanf("%d", &n);

        for (int i = 1; i <= n; i++) {
            int numerator = 2 * i;          // 2, 4, 6, 8, ...
            int denominator = 4 * i - 1;    // 3, 7, 11, 15, ...
            sum += (float)numerator / denominator;
        }

        printf("Sum of series up to %d terms = %.4f\n", n, sum);
    }

    else if (choice == 2) {
        // Q46: Pattern printing
        int rows = 5, cols = 5;
        for (int i = 1; i <= rows; i++) {
            for (int j = 1; j <= cols; j++) {
                printf("*");
            }
            printf("\n");
        }
    }

    else {
        printf("Invalid choice!\n");
    }

    return 0;
}
