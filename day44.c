// Day 44
// Q87 and Q88 Combined Code

#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Q87: Count spaces, digits, and special characters in a string
void countSpacesDigitsSpecials() {
    char str[200];
    int spaces = 0, digits = 0, specials = 0, i = 0;

    printf("Q87 Input: Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0'; // Remove newline

    while (str[i] != '\0') {
        if (str[i] == ' ')
            spaces++;
        else if (isdigit(str[i]))
            digits++;
        else if (!isalpha(str[i]))  // not a letter or space
            specials++;
        i++;
    }

    printf("Q87 Output: Spaces=%d, Digits=%d, Special=%d\n\n", spaces, digits, specials);
}

// Q88: Replace spaces with hyphens
void replaceSpacesWithHyphens() {
    char str[200];
    int i = 0;

    printf("Q88 Input: Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    while (str[i] != '\0') {
        if (str[i] == ' ')
            str[i] = '-';
        i++;
    }

    printf("Q88 Output: %s\n", str);
}

int main() {
    countSpacesDigitsSpecials();
    replaceSpacesWithHyphens();
    return 0;
}

/*
Sample Test Cases:

Q87:
Input:
a b1&2
Output:
Spaces=1, Digits=2, Special=1

Q88:
Input:
hello world
Output:
hello-world
*/
