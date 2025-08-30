#include <stdio.h>

int main() {
    int choice;
    printf("Day 10 Programs\n");
    printf("1. Classify a triangle\n");
    printf("2. Display day of the week\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        // Q19: Classify a triangle
        int a, b, c;
        printf("Enter three sides of the triangle: ");
        scanf("%d %d %d", &a, &b, &c);

        if (a + b > c && a + c > b && b + c > a) {  // Valid triangle check
            if (a == b && b == c)
                printf("The triangle is Equilateral\n");
            else if (a == b || b == c || a == c)
                printf("The triangle is Isosceles\n");
            else
                printf("The triangle is Scalene\n");
        } else {
            printf("The given sides do not form a valid triangle\n");
        }
    }
    else if (choice == 2) {
        // Q20: Day of the week using switch
        int day;
        printf("Enter a number (1-7): ");
        scanf("%d", &day);

        switch (day) {
            case 1: printf("Monday\n"); break;
            case 2: printf("Tuesday\n"); break;
            case 3: printf("Wednesday\n"); break;
            case 4: printf("Thursday\n"); break;
            case 5: printf("Friday\n"); break;
            case 6: printf("Saturday\n"); break;
            case 7: printf("Sunday\n"); break;
            default: printf("Invalid input! Enter a number between 1-7.\n");
        }
    }
    else {
        printf("Invalid choice!\n");
    }

    return 0;
}
