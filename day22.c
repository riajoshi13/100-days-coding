#include <stdio.h>

// Function to calculate factorial of a digit
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int choice;
    printf("Day 22 Programs\n");
    printf("1. Check if a number is a Strong number\n");
    printf("2. Find sum of series 1 + 3/4 + 5/6 + 7/8 + ... up to n terms\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        // Q43: Strong Number
        int num, temp, digit, sum = 0;
        printf("Enter a number: ");
        scanf("%d", &num);

        temp = num;
        while (temp > 0) {
            digit = temp % 10;
            sum += factorial(digit);
            temp /= 10;
        }

        if (sum == num)
            printf("%d is a Strong Number\n", num);
        else
            printf("%d is NOT a Strong Number\n", num);
    }

    else if (choice == 2) {
        // Q44: Series sum
        int n;
        float sum = 0.0;
        printf("Enter number of terms (n): ");
        scanf("%d", &n);

        for (int i = 1; i <= n; i++) {
            int numerator = 2 * i - 1;   // 1, 3, 5, 7 ...
            int denominator = 2 * i;     // 2, 4, 6, 8 ...
            sum += (float)numerator / denominator;
        }

        printf("Sum of series up to %d terms = %.4f\n", n, sum);
    }

    else {
        printf("Invalid choice!\n");
    }

    return 0;
}
