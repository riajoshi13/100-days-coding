#include <stdio.h>

int main() {
    int choice;
    printf("Day 24 Programs\n");
    printf("1. Print star triangle pattern\n");
    printf("2. Print number triangle pattern\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        // Q47: Star Pattern
        int rows = 5;
        for (int i = 1; i <= rows; i++) {
            for (int j = 1; j <= i; j++) {
                printf("*");
            }
            printf("\n");
        }
    }

    else if (choice == 2) {
        // Q48: Number Pattern
        int rows = 5;
        for (int i = 1; i <= rows; i++) {
            for (int j = 1; j <= i; j++) {
                printf("%d", j);
            }
            printf("\n");
        }
    }

    else {
        printf("Invalid choice!\n");
    }

    return 0;
}
