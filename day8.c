#include <stdio.h>

int main() {
    // Q15: Check type of character
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);  // space before %c avoids newline issues

    if (ch >= 'A' && ch <= 'Z') {
        printf("'%c' is an UPPERCASE alphabet.\n", ch);
    }
    else if (ch >= 'a' && ch <= 'z') {
        printf("'%c' is a lowercase alphabet.\n", ch);
    }
    else if (ch >= '0' && ch <= '9') {
        printf("'%c' is a digit.\n", ch);
    }
    else {
        printf("'%c' is a special character.\n", ch);
    }

    // Q16: Find largest among three numbers
    int a, b, c;
    printf("\nEnter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c) {
        printf("The largest number is: %d\n", a);
    }
    else if (b >= a && b >= c) {
        printf("The largest number is: %d\n", b);
    }
    else {
        printf("The largest number is: %d\n", c);
    }

    return 0;
}
