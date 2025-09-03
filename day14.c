#include <stdio.h>

int main() {
    int choice;
    printf("Day 14 Programs\n");
    printf("1. Sum of first n odd numbers\n");
    printf("2. Product of even numbers from 1 to n\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        // Q27: Sum of first n odd numbers
        int n, sum = 0;
        printf("Enter value of n: ");
        scanf("%d", &n);

        for (int i = 1, count = 0; count < n; i += 2, count++) {
            sum += i;
        }
        printf("Sum of first %d odd numbers = %d\n", n, sum);
    }
    else if (choice == 2) {
        // Q28: Product of even numbers from 1 to n
        int n;
        long long product = 1; // long long to handle big results
        printf("Enter value of n: ");
        scanf("%d", &n);

        for (int i = 2; i <= n; i += 2) {
            product *= i;
        }
        printf("Product of even numbers from 1 to %d = %lld\n", n, product);
    }
    else {
        printf("Invalid choice!\n");
    }

    return 0;
}
