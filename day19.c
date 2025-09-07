#include <stdio.h>

int main() {
    int choice;
    printf("Day 19 Programs\n");
    printf("1. Find LCM of two numbers\n");
    printf("2. Find sum of digits of a number\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        // Q37: LCM of two numbers
        int a, b, max, lcm;
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);

        max = (a > b) ? a : b;

        while (1) {
            if (max % a == 0 && max % b == 0) {
                lcm = max;
                break;
            }
            max++;
        }

        printf("LCM of %d and %d is: %d\n", a, b, lcm);
    }

    else if (choice == 2) {
        // Q38: Sum of digits
        int num, sum = 0, digit;
        printf("Enter a number: ");
        scanf("%d", &num);

        while (num > 0) {
            digit = num % 10;   // get last digit
            sum += digit;       // add to sum
            num /= 10;          // remove last digit
        }

        printf("Sum of digits = %d\n", sum);
    }

    else {
        printf("Invalid choice!\n");
    }

    return 0;
}
