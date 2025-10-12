// Day 48
// Q95 and Q96 Combined Code

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Function to check if one string is a rotation of another
void checkRotation() {
    char str1[100], str2[100], temp[200];

    printf("Q95 Input: Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Q95 Input: Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    // Check if lengths are different
    if (strlen(str1) != strlen(str2)) {
        printf("Q95 Output: Not rotation\n\n");
        return;
    }

    // Concatenate str1 to itself
    strcpy(temp, str1);
    strcat(temp, str1);

    // Check if str2 is a substring of temp
    if (strstr(temp, str2) != NULL)
        printf("Q95 Output: Rotation\n\n");
    else
        printf("Q95 Output: Not rotation\n\n");
}

// Function to reverse each word in a sentence
void reverseEachWord() {
    char str[200];
    int start = 0, end = 0, len, i;
    char temp;

    printf("Q96 Input: Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    len = strlen(str);

    for (i = 0; i <= len; i++) {
        // When a space or end of string is found, reverse the word
        if (str[i] == ' ' || str[i] == '\0') {
            end = i - 1;
            while (start < end) {
                temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }
            start = i + 1;
        }
    }

    printf("Q96 Output: %s\n", str);
}

int main() {
    checkRotation();
    reverseEachWord();
    return 0;
}

/*
Sample Test Cases:

Q95:
Input:
abcde
deabc
Output:
Rotation

Input:
abc
acb
Output:
Not rotation

Q96:
Input:
I love coding
Output:
I evol gnidoc
*/
