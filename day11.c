#include <stdio.h>

int main() {
    int choice;
    printf("Day 11 Programs\n");
    printf("1. Display month name & number of days\n");
    printf("2. Find profit or loss percentage\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        // Q21: Month and days using switch
        int month;
        printf("Enter month number (1-12): ");
        scanf("%d", &month);

        switch (month) {
            case 1:  printf("January - 31 days\n"); break;
            case 2:  printf("February - 28/29 days\n"); break;
            case 3:  printf("March - 31 days\n"); break;
            case 4:  printf("April - 30 days\n"); break;
            case 5:  printf("May - 31 days\n"); break;
            case 6:  printf("June - 30 days\n"); break;
            case 7:  printf("July - 31 days\n"); break;
            case 8:  printf("August - 31 days\n"); break;
            case 9:  printf("September - 30 days\n"); break;
            case 10: printf("October - 31 days\n"); break;
            case 11: printf("November - 30 days\n"); break;
            case 12: printf("December - 31 days\n"); break;
            default: printf("Invalid month number!\n");
        }
    }
    else if (choice == 2) {
        // Q22: Profit or Loss calculation
        float costPrice, sellingPrice, profitLoss;
        printf("Enter Cost Price: ");
        scanf("%f", &costPrice);
        printf("Enter Selling Price: ");
        scanf("%f", &sellingPrice);

        if (sellingPrice > costPrice) {
            profitLoss = ((sellingPrice - costPrice) / costPrice) * 100;
            printf("Profit Percentage = %.2f%%\n", profitLoss);
        }
        else if (sellingPrice < costPrice) {
            profitLoss = ((costPrice - sellingPrice) / costPrice) * 100;
            printf("Loss Percentage = %.2f%%\n", profitLoss);
        }
        else {
            printf("No Profit, No Loss\n");
        }
    }
    else {
        printf("Invalid choice!\n");
    }

    return 0;
}
