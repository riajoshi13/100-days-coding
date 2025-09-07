#include <stdio.h>

int main() {
    int choice;
    printf("Day 15 Programs\n");
    printf("1. Factorial of a number\n");
    printf("2. Reverse a number\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        // Q29: Factorial of a number
        int n;
        long long fact = 1;
        printf("Enter a number: ");
        scanf("%d", &n);

        if (n < 0) {
            printf("Factorial not defined for negative numbers.\n");
        } else {
            for (int i = 1; i <= n; i++) {
                fact *= i;
            }
            printf("Factorial of %d = %lld\n", n, fact);
        }
    }
    else if (choice == 2) {
        // Q30: Reverse a number
        int num, rev = 0, digit;
        printf("Enter a number: ");
        scanf("%d", &num);

        while (num > 0) {
            digit = num % 10;        // extract last digit
            rev = rev * 10 + digit; // build reversed number
            num /= 10;              // remove last digit
        }
        printf("Reversed number = %d\n", rev);
    }
    else {
        printf("Invalid choice!\n");
    }

    return 0;
}
