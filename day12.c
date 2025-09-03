#include <stdio.h>

int main() {
    int choice;
    printf("Day 12 Programs\n");
    printf("1. Calculate Library Fine\n");
    printf("2. Calculate Electricity Bill\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        // Q23: Library Fine
        int days, fine = 0;
        printf("Enter number of late days: ");
        scanf("%d", &days);

        if (days <= 5) {
            fine = days * 2;
            printf("Fine = Rs. %d\n", fine);
        }
        else if (days <= 10) {
            fine = (5 * 2) + (days - 5) * 4;
            printf("Fine = Rs. %d\n", fine);
        }
        else if (days <= 30) {
            fine = (5 * 2) + (5 * 4) + (days - 10) * 6;
            printf("Fine = Rs. %d\n", fine);
        }
        else {
            printf("Membership Cancelled\n");
        }
    }
    else if (choice == 2) {
        // Q24: Electricity Bill
        int units;
        float bill = 0;
        printf("Enter number of units consumed: ");
        scanf("%d", &units);

        if (units <= 100) {
            bill = units * 5;
        }
        else if (units <= 200) {
            bill = (100 * 5) + (units - 100) * 7;
        }
        else if (units <= 300) {
            bill = (100 * 5) + (100 * 7) + (units - 200) * 10;
        }
        else {
            bill = (100 * 5) + (100 * 7) + (100 * 10) + (units - 300) * 12;
        }

        printf("Electricity Bill = Rs. %.2f\n", bill);
    }
    else {
        printf("Invalid choice!\n");
    }

    return 0;
}
