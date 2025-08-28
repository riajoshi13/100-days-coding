#include <stdio.h>

// Q11: Check even or odd using if-else
void q11() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("%d is Even\n", num);
    } else {
        printf("%d is Odd\n", num);
    }
}

// Q12: Check positive, negative, or zero using nested if-else
void q12() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num >= 0) {
        if (num == 0) {
            printf("The number is Zero\n");
        } else {
            printf("%d is Positive\n", num);
        }
    } else {
        printf("%d is Negative\n", num);
    }
}

int main() {
    printf("Running Q11:\n");
    q11();

    printf("\nRunning Q12:\n");
    q12();

    return 0;
}
