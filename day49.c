// Day 49
// Q97 and Q98 Combined Code

#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to print initials (Q97)
void printInitialsOnly() {
    char name[100];
    int i;

    printf("Q97 Input: Enter full name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    printf("Q97 Output: ");
    // Print first letter as initial
    printf("%c.", toupper(name[0]));

    // Loop through to find next initials
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i + 1] != '\0') {
            printf("%c.", toupper(name[i + 1]));
        }
    }
    printf("\n\n");
}

// Function to print initials with surname in full (Q98)
void printInitialsWithSurname() {
    char name[100], words[10][50];
    int i = 0, j = 0, k = 0, wordCount = 0;

    printf("Q98 Input: Enter full name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    // Split name into words
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ') {
            words[wordCount][j] = '\0';
            wordCount++;
            j = 0;
        } else {
            words[wordCount][j++] = name[i];
        }
    }
    words[wordCount][j] = '\0'; // last word
    wordCount++;

    printf("Q98 Output: ");
    // Print initials for all except last word
    for (k = 0; k < wordCount - 1; k++) {
        printf("%c.", toupper(words[k][0]));
    }
    // Print the last word (surname)
    printf(" %s\n", words[wordCount - 1]);
}

int main() {
    printInitialsOnly();
    printInitialsWithSurname();
    return 0;
}

/*
Sample Test Cases:

Q97:
Input:
John Doe
Output:
J.D.

Q98:
Input:
John David Doe
Output:
J.D. Doe
*/
