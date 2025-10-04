// Day 27
// Q53 and Q54 Combined Code

#include <stdio.h>

// Q53: Diamond-like pattern (top wide, then narrowing)
void patternQ53() {
    int n = 5; // middle line has 9 stars
    printf("Q53 Output:\n");

    // upper half including middle
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // lower half
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
}

// Q54: Pyramid diamond pattern with spaces
void patternQ54() {
    int n = 4; // height of pyramid half
    printf("Q54 Output:\n");

    // upper half
    for (int i = 1; i <= n; i++) {
        for (int s = 1; s <= n - i; s++) {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // lower half
    for (int i = n - 1; i >= 1; i--) {
        for (int s = 1; s <= n - i; s++) {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    patternQ53();
    patternQ54();
    return 0;
}

/*
Sample Test Cases:

Q53 Output:
*
***
*****
*******
*********
*******
*****
***
*

Q54 Output:
   *
  ***
 *****
*******
 *****
  ***
   *
*/