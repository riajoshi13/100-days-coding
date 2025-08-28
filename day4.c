#include <stdio.h>

// Q7: Swap two numbers without using a third variable
void q7() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before Swap: a = %d, b = %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After Swap: a = %d, b = %d\n", a, b);
}

// Q8: Sum of first n natural numbers
void q8() {
    int n, sum;

    printf("Enter n: ");
    scanf("%d", &n);

    sum = n * (n + 1) / 2;

    printf("Sum of first %d natural numbers = %d\n", n, sum);
}

int main() {
    printf("Running Q7:\n");
    q7();

    printf("\nRunning Q8:\n");
    q8();

    return 0;
}
