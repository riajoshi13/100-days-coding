#include <stdio.h>

int main() {
    int choice;
    printf("Day 20 Programs\n");
    printf("1. Find product of odd digits of a number\n");
    printf("2. Find 1's complement of a binary number\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        // Q39: Product of odd digits
        int num, digit, product = 1, found = 0;
        printf("Enter a number: ");
        scanf("%d", &num);

        while (num > 0) {
            digit = num % 10;
            if (digit % 2 != 0) {  // odd digit
                product *= digit;
                found = 1;
            }
            num /= 10;
        }

        if (found)
            printf("Product of odd digits = %d\n", product);
        else
            printf("No odd digits found!\n");
    }

    else if (choice == 2) {
        // Q40: 1's complement of binary number
        long long bin;
        printf("Enter a binary number: ");
        scanf("%lld", &bin);

        long long result = 0, place = 1, digit;

        while (bin > 0) {
            digit = bin % 10;
            if (digit == 0)
                result += 1 * place;  // flip 0 → 1
            else
                result += 0 * place;  // flip 1 → 0
            bin /= 10;
            place *= 10;
        }

        printf("1's Complement = %lld\n", result);
    }

    else {
        printf("Invalid choice!\n");
    }

    return 0;
}
