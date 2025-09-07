#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    printf("Day 17 Programs\n");
    printf("1. Check Armstrong Number\n");
    printf("2. Check Prime Number\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        // Q33: Armstrong Number
        int num, original, remainder, n = 0;
        float result = 0.0;

        printf("Enter a number: ");
        scanf("%d", &num);
        original = num;

        // Count digits
        int temp = num;
        while (temp != 0) {
            temp /= 10;
            n++;
        }

        // Sum of powers of digits
        temp = num;
        while (temp != 0) {
            remainder = temp % 10;
            result += pow(remainder, n);
            temp /= 10;
        }

        if ((int)result == original)
            printf("%d is an Armstrong number.\n", original);
        else
            printf("%d is NOT an Armstrong number.\n", original);
    }

    else if (choice == 2) {
        // Q34: Prime Number
        int num, i, isPrime = 1;
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num <= 1) {
            isPrime = 0;
        } else {
            for (i = 2; i <= num / 2; i++) {
                if (num % i == 0) {
                    isPrime = 0;
                    break;
                }
            }
        }

        if (isPrime)
            printf("%d is a Prime number.\n", num);
        else
            printf("%d is NOT a Prime number.\n", num);
    }

    else {
        printf("Invalid choice!\n");
    }

    return 0;
}
