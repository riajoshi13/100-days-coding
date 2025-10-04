// Day 26
// Q51 and Q52 Combined Code

#include <stdio.h>

// Q51: Number Pattern with spaces
void patternQ51() {
    int rows = 5;
    printf("Q51 Output:\n");
    for (int i = rows; i >= 1; i--) {
        // print spaces
        for (int s = 1; s < i; s++) {
            printf(" ");
        }
        // print numbers
        for (int j = i; j <= rows; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    printf("\n");
}

// Q52: Irregular Star Pattern
void patternQ52() {
    printf("Q52 Output:\n");
    printf("*\n\n");
    printf("*\n*\n*\n\n");
    printf("*\n*\n*\n*\n*\n\n");
    printf("*\n*\n*\n\n");
    printf("*\n");
}

int main() {
    patternQ51();
    patternQ52();
    return 0;
}

/*
Sample Test Cases:

Q51 Output:
    5
   45
  345
 2345
12345

Q52 Output:
*

*
*
*

*
*
*
*
*

*
*
*

*
*/