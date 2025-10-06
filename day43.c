// Day 43
// Q85 and Q86 Combined Code

#include <stdio.h>
#include <string.h>

// Q85: Reverse a string
void reverseString() {
    char str[100], rev[100];
    int length = 0, i;

    printf("Q85 Input: Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Reads full string including spaces

    // Remove newline if present
    str[strcspn(str, "\n")] = '\0';

    // Calculate string length manually
    while (str[length] != '\0') {
        length++;
    }

    // Reverse logic
    for (i = 0; i < length; i++) {
        rev[i] = str[length - i - 1];
    }
    rev[i] = '\0';

    printf("Q85 Output: %s\n\n", rev);
}

// Q86: Check if a string is a palindrome
void checkPalindrome() {
    char str[100];
    int length = 0, i, flag = 0;

    printf("Q86 Input: Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    // Find string length manually
    while (str[length] != '\0') {
        length++;
    }

    // Check palindrome
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("Q86 Output: Palindrome\n");
    else
        printf("Q86 Output: Not palindrome\n");
}

int main() {
    reverseString();
    checkPalindrome();
    return 0;
}

/*
Sample Test Cases:

Q85:
Input:
abcd
Output:
dcba

Q86:
Input:
madam
Output:
Palindrome

Input:
hello
Output:
Not palindrome
*/
