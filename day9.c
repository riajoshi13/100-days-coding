#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    printf("Day 9 Programs\n");
    printf("1. Find roots of a quadratic equation\n");
    printf("2. Assign grades based on percentage\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        // Quadratic equation: ax^2 + bx + c = 0
        float a, b, c, discriminant, root1, root2;
        printf("Enter coefficients a, b, c: ");
        scanf("%f %f %f", &a, &b, &c);

        discriminant = b*b - 4*a*c;

        if (discriminant > 0) {
            root1 = (-b + sqrt(discriminant)) / (2*a);
            root2 = (-b - sqrt(discriminant)) / (2*a);
            printf("Roots are real and distinct: %.2f and %.2f\n", root1, root2);
        }
        else if (discriminant == 0) {
            root1 = -b / (2*a);
            printf("Roots are real and equal: %.2f and %.2f\n", root1, root1);
        }
        else {
            float realPart = -b / (2*a);
            float imagPart = sqrt(-discriminant) / (2*a);
            printf("Roots are complex: %.2f + %.2fi and %.2f - %.2fi\n",
                   realPart, imagPart, realPart, imagPart);
        }
    }
    else if (choice == 2) {
        // Grading system
        float percentage;
        printf("Enter percentage: ");
        scanf("%f", &percentage);

        if (percentage >= 90)
            printf("Grade: A\n");
        else if (percentage >= 75)
            printf("Grade: B\n");
        else if (percentage >= 60)
            printf("Grade: C\n");
        else if (percentage >= 40)
            printf("Grade: D\n");
        else
            printf("Grade: F (Fail)\n");
    }
    else {
        printf("Invalid choice!\n");
    }

    return 0;
}
