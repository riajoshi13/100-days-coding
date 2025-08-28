#include <stdio.h>

// Q5: Convert Celsius to Fahrenheit
void q5() {
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("Temperature in Fahrenheit = %.2f\n", fahrenheit);
}

// Q6: Swap two numbers using a third variable
void q6() {
    int a, b, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before Swap: a = %d, b = %d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("After Swap: a = %d, b = %d\n", a, b);
}

int main() {
    printf("Running Q5:\n");
    q5();

    printf("\nRunning Q6:\n");
    q6();

    return 0;
}
