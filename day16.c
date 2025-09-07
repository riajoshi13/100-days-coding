#include <stdio.h>

int main() {
    int choice;
    printf("Day 16 Programs\n");
    printf("1. Convert number to binary\n");
    printf("2. Check if number is palindrome\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        // Q31: Decimal to Binary
        int num, binary[32], i = 0;
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num == 0) {
            printf("Binary: 0\n");
        } else {
            while (num > 0) {
                binary[i] = num % 2; // remainder (bit)
                num /= 2;            // divide by 2
                i++;
            }
            printf("Binary: ");
            for (int j = i - 1; j >= 0; j--) {
                printf("%d", binary[j]);
            }
            printf("\n");
        }
    }
    else if (choice == 2) {
        // Q32: Palindrome check
        int num, original, rev = 0, digit;
        printf("Enter a number: ");
        scanf("%d", &num);
        original = num;

        while (num > 0) {
            digit = num % 10;       
            rev = rev * 10 + digit; 
            num /= 10;              
        }

        if (rev == original) {
            printf("%d is a Palindrome.\n", original);
        } else {
            printf("%d is NOT a Palindrome.\n", original);
        }
    }
    else {
        printf("Invalid choice!\n");
    }

    return 0;
}
