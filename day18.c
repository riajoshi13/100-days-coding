#include <stdio.h>

int main() {
    int choice;
    printf("Day 18 Programs\n");
    printf("1. Print all factors of a number\n");
    printf("2. Find HCF (GCD) of two numbers\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        // Q35: Print all factors
        int num, i;
        printf("Enter a number: ");
        scanf("%d", &num);

        printf("Factors of %d are: ", num);
        for (i = 1; i <= num; i++) {
            if (num % i == 0) {
                printf("%d ", i);
            }
        }
        printf("\n");
    }

    else if (choice == 2) {
        // Q36: Find HCF (GCD)
        int a, b, i, hcf;
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);

        for (i = 1; i <= (a < b ? a : b); i++) {
            if (a % i == 0 && b % i == 0) {
                hcf = i;
            }
        }

        printf("HCF (GCD) of %d and %d is: %d\n", a, b, hcf);
    }

    else {
        printf("Invalid choice!\n");
    }

    return 0;
}
