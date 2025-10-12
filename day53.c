// Day 53
// Q3: Sum and Difference of Two Numbers
// Hackerrank Link: https://www.hackerrank.com/challenges/sum-numbers-c/problem?isFullScreen=true

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a, b;
    float c, d;

    // Input integers
    scanf("%d %d", &a, &b);
    // Input floats
    scanf("%f %f", &c, &d);

    // Output results
    printf("%d %d\n", a + b, a - b);
    printf("%.1f %.1f\n", c + d, c - d);

    return 0;
}

/*
Sample Test Case:

Input:
10 4
4.0 2.0

Output:
14 6
6.0 2.0
*/
