// Day 46
// Q91 and Q92 Combined Code

#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Q91: Remove all vowels from a string
void removeVowels() {
    char str[200], result[200];
    int i, j = 0;

    printf("Q91 Input: Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // remove newline

    for (i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
            result[j++] = str[i];
        }
    }
    result[j] = '\0';

    printf("Q91 Output: %s\n\n", result);
}

// Q92: Find the first repeating lowercase alphabet in a string
void firstRepeatingChar() {
    char str[200];
    int freq[26] = {0};  // for 'a' to 'z'
    int i;
    char ans = '\0';

    printf("Q92 Input: Enter a lowercase string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for (i = 0; str[i] != '\0'; i++) {
        if (islower(str[i])) {
            int index = str[i] - 'a';
            freq[index]++;
            if (freq[index] == 2) {  // found repeating
                ans = str[i];
                break;
            }
        }
    }

    if (ans)
        printf("Q92 Output: %c\n", ans);
    else
        printf("Q92 Output: No repeating lowercase alphabet found\n");
}

int main() {
    removeVowels();
    firstRepeatingChar();
    return 0;
}

/*
Sample Test Cases:

Q91:
Input:
education
Output:
dctn

Q92:
Input:
stress
Output:
s
*/
