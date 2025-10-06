// Day 45
// Q89 and Q90 Combined Code

#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Q89: Count frequency of a given character in a string
void countCharacterFrequency() {
    char str[200], ch;
    int i, count = 0;

    printf("Q89 Input: Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // remove newline

    printf("Enter the character to count: ");
    scanf("%c", &ch);
    getchar(); // consume leftover newline

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch)
            count++;
    }

    printf("Q89 Output: %d\n\n", count);
}

// Q90: Toggle case of each character in a string
void toggleCase() {
    char str[200];
    int i;

    printf("Q90 Input: Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for (i = 0; str[i] != '\0'; i++) {
        if (islower(str[i]))
            str[i] = toupper(str[i]);
        else if (isupper(str[i]))
            str[i] = tolower(str[i]);
    }

    printf("Q90 Output: %s\n", str);
}

int main() {
    countCharacterFrequency();
    toggleCase();
    return 0;
}

/*
Sample Test Cases:

Q89:
Input:
programming
g
Output:
2

Q90:
Input:
Hello
Output:
hELLO
*/
