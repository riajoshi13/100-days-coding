#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    printf("Day 21 Programs\n");
    printf("1. Swap first and last digit of a number\n");
    printf("2. Check if a number is a Perfect number\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        // Q41: Swap first and last digit
        int num, first, last, digits = 0, temp, swapped;
        printf("Enter a number: ");
        scanf("%d", &num);

        temp = num;
        last = temp % 10;

        while (temp >= 10) {
            temp /= 10;
            digits++;
        }
        first = temp;

        // If single digit, swapping is same number
        if (digits == 0) {
            swapped = num;
        } else {
            // remove first and last
            int middle = (num % (int)pow(10, digits)) / 10;
            swapped = last * (int)pow(10, digits) + middle * 10 + first;
        }

        printf("Number after swapping first and last digit = %d\n", swapped);
    }

    else if (choice == 2) {
        // Q42: Check if number is Perfect
        int num, sum = 0;
        printf("Enter a number: ");
        scanf("%d", &num);

        for (int i = 1; i <= num / 2; i++) {
            if (num % i == 0)
                sum += i;
        }

        if (sum == num && num != 0)
            printf("%d is a Perfect Number\n", num);
        else
            printf("%d is NOT a Perfect Number\n", num);
    }

    else {
        printf("Invalid choice!\n");
    }

    return 0;
}
