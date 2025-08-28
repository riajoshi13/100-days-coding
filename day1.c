#include <stdio.h>

// Q1: Sum of two numbers
void q1() {
    int a, b, sum;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    sum = a + b;
    printf("Sum = %d\n", sum);
}

// Q2: Sum, Difference, Product, Quotient
void q2() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Sum = %d\n", a + b);
    printf("Difference = %d\n", a - b);
    printf("Product = %d\n", a * b);

    if (b != 0) {
        printf("Quotient = %d\n", a / b);
    } else {
        printf("Division by zero not allowed\n");
    }
}

int main() {
    printf("Running Q1:\n");
    q1();

    printf("\nRunning Q2:\n");
    q2();

    return 0;
}
