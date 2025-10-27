// Day 64
// Q114: Length of Longest Substring Without Repeating Characters

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    scanf("%s", s);

    int lastIndex[256];  // To store last index of every character
    for (int i = 0; i < 256; i++)
        lastIndex[i] = -1;

    int maxLen = 0;
    int start = 0;

    for (int i = 0; i < strlen(s); i++) {
        // If character already appeared, move start to avoid repetition
        if (lastIndex[s[i]] >= start)
            start = lastIndex[s[i]] + 1;

        lastIndex[s[i]] = i;
        int currLen = i - start + 1;

        if (currLen > maxLen)
            maxLen = currLen;
    }

    printf("%d", maxLen);
    return 0;
}

/*
Sample Test Cases:

Input 1:
abcabcbb
Output 1:
3

Input 2:
bbbbb
Output 2:
1

Input 3:
pwwkew
Output 3:
3
*/
