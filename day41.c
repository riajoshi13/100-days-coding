// Day 41
// Q81 and Q82 Combined Code

#include <stdio.h>

// Q81: Count characters in a string without using built-in length functions
void countCharacters() {
    char str[100];
    int count = 0;

    printf("Q81 Input: Enter a string: ");
    fgets(str, sizeof(str), stdin);  // reads input with spaces

    // Count characters manually until '\0' or newline
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') break; // Stop counting before newline
        count++;
    }

    printf("Q81 Output: %d\n\n", count);
}

// Q82: Print each character of a string on a new line
void printCharacters() {
    char str[100];

    printf("Q82 Input: Enter a string: ");
    fgets(str, sizeof(str), stdin); // reads input with spaces

    printf("Q82 Output:\n");
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') break; // ignore newline
        printf("%c\n", str[i]);
    }
}

int main() {
    countCharacters();
    printCharacters();
    return 0;
}

/*
Sample Test Cases:

Q81:
Input:
Hello
Output:
5

Q82:
Input:
Hi
Output:
H
i
*/
