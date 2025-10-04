#include <stdio.h>

int main() {
    int choice;
    printf("Day 25 Programs\n");
    printf("1. Print Number Pattern (Q49)\n");
    printf("2. Print Reverse Star Pyramid (Q50)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        // Q49: Number Pattern
        int rows = 5;
        for (int i = rows; i >= 1; i--) {
            for (int j = i; j <= rows; j++) {
                printf("%d", j);
            }
            printf("\n");
        }
    }

    else if (choice == 2) {
        // Q50: Reverse Star Pyramid
        int rows = 5;
        for (int i = rows; i >= 1; i--) {
            // print spaces
            for (int s = 0; s < rows - i; s++) {
                printf(" ");
            }
            // print stars
            for (int j = 1; j <= i; j++) {
                printf("*");
            }
            printf("\n");
        }
    }

    else {
        printf("Invalid choice!\n");
    }

    return 0;
}
