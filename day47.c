// Day 47
// Q93 and Q94 Combined Code

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

// Function to check if two strings are anagrams
void checkAnagram() {
    char str1[100], str2[100];
    int count1[26] = {0}, count2[26] = {0};
    int i;

    printf("Q93 Input: Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Q93 Input: Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    // Convert to lowercase and count frequency
    for (i = 0; str1[i] != '\0'; i++) {
        if (isalpha(str1[i])) {
            count1[tolower(str1[i]) - 'a']++;
        }
    }
    for (i = 0; str2[i] != '\0'; i++) {
        if (isalpha(str2[i])) {
            count2[tolower(str2[i]) - 'a']++;
        }
    }

    // Compare frequency arrays
    for (i = 0; i < 26; i++) {
        if (count1[i] != count2[i]) {
            printf("Q93 Output: Not anagrams\n\n");
            return;
        }
    }

    printf("Q93 Output: Anagrams\n\n");
}

// Function to find the longest word in a sentence
void findLongestWord() {
    char str[200];
    char word[50], longest[50];
    int i = 0, j = 0, maxLen = 0, len = 0;

    printf("Q94 Input: Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    while (1) {
        if (str[i] == ' ' || str[i] == '\0') {
            word[j] = '\0';
            len = strlen(word);

            if (len > maxLen) {
                maxLen = len;
                strcpy(longest, word);
            }

            j = 0;
            if (str[i] == '\0') break;
        } else {
            word[j++] = str[i];
        }
        i++;
    }

    printf("Q94 Output: %s\n", longest);
}

int main() {
    checkAnagram();
    findLongestWord();
    return 0;
}

/*
Sample Test Cases:

Q93:
Input:
listen
silent
Output:
Anagrams

Input:
hello
world
Output:
Not anagrams

Q94:
Input:
I love programming
Output:
programming
*/
