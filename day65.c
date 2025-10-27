// Day 65
// Q115: Check if Two Strings Are Anagrams

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000], t[1000];
    scanf("%s", s);
    scanf("%s", t);

    // If lengths are different, not anagrams
    if (strlen(s) != strlen(t)) {
        printf("Not Anagram");
        return 0;
    }

    int count[26] = {0};  // frequency of each letter

    // Increment for s and decrement for t
    for (int i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }

    // Check if all counts are zero
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram");
    return 0;
}

/*
Sample Test Cases:

Input 1:
anagram
nagaram
Output 1:
Anagram

Input 2:
rat
car
Output 2:
Not Anagram
*/
