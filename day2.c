#include <stdio.h>
#define PI 3.1416

// Q3: Area and Perimeter of Rectangle
void q3() {
    float length, breadth, area, perimeter;

    printf("Enter lenght and breadth: ");
    scanf("%f %f", &length, &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);
    printf("Area of Reactangle = %.2f\n", area);
    printf("Perimeter of Rectangle = %.2f\n", perimeter);
}


// Q4: Area and Circumference of Circle
void q4() {
    float radius, area, circumference;

    printf("Enter radius: ");
    scanf("%f", &radius);

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("Area of Circle = %.2f\n", area);
    printf("Circumference of Circle = %.2f\n", circumference);
}

int main() {
    printf("Running Q3:\n");
    q3();

    printf("\nRunning Q4:\n");
    q4();

    return 0;
}
