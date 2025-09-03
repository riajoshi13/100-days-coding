#include <stdio.h>

int main() {
    int choice;
    printf("Day 13 Programs\n");
    printf("1. Calculator using switch-case\n");
    printf("2. Print numbers from 1 to n\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        // Q25: Calculator
        int a, b;
        char op;
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);
        printf("Enter operator (+, -, *, /, %%): ");
        scanf(" %c", &op);  // space before %c to ignore newline

        switch (op) {
            case '+':
                printf("Result = %d\n", a + b);
                break;
            case '-':
                printf("Result = %d\n", a - b);
                break;
            case '*':
                printf("Result = %d\n", a * b);
                break;
            case '/':
                if (b != 0)
                    printf("Result = %d\n", a / b);
                else
                    printf("Error: Division by zero\n");
                break;
            case '%':
                if (b != 0)
                    printf("Result = %d\n", a % b);
                else
                    printf("Error: Modulus by zero\n");
                break;
            default:
                printf("Invalid operator!\n");
        }
    }
    else if (choice == 2) {
        // Q26: Print numbers from 1 to n
        int n;
        printf("Enter value of n: ");
        scanf("%d", &n);

        printf("Numbers from 1 to %d are:\n", n);
        for (int i = 1; i <= n; i++) {
            printf("%d ", i);
        }
        printf("\n");
    }
    else {
        printf("Invalid choice!\n");
    }

    return 0;
}
