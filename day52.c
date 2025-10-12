// Day 52
// Q2: Playing with Characters
// Hackerrank Link: https://www.hackerrank.com/challenges/playing-with-characters/problem?isFullScreen=true

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char ch;
    char s[100];
    char sen[100];

    // Input a character, string, and sentence
    scanf("%c", &ch);
    scanf("%s", s);
    scanf(" %[^\n]%*c", sen);  // Reads sentence including spaces

    // Output all three
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);

    return 0;
}

/*
Sample Test Case:

Input:
C
Language
Welcome To C!!

Output:
C
Language
Welcome To C!!
*/
