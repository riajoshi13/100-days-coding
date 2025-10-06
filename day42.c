// Day 42
// Q83 and Q84 Combined Code

#include <stdio.h>

// Q83: Count vowels and consonants in a string
void countVowelsConsonants() {
    char str[100];
    int vowels = 0, consonants = 0;

    printf("Q83 Input: Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Reads the entire line (with spaces)

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        // Check for vowels (both lowercase and uppercase)
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowels++;
        }
        // Check for consonants (letters but not vowels)
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            consonants++;
        }
    }

    printf("Q83 Output: Vowels=%d, Consonants=%d\n\n", vowels, consonants);
}

// Q84: Convert a lowercase string to uppercase without using built-in functions
void convertToUppercase() {
    char str[100];

    printf("Q84 Input: Enter a lowercase string: ");
    fgets(str, sizeof(str), stdin);  // Reads input string (with spaces)

    // Convert each lowercase letter to uppercase
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;  // ASCII conversion (a→A, b→B, etc.)
        }
    }

    printf("Q84 Output: %s\n", str);
}

int main() {
    countVowelsConsonants();
    convertToUppercase();
    return 0;
}

/*
Sample Test Cases:

Q83:
Input:
hello
Output:
Vowels=2, Consonants=3

Q84:
Input:
hello
Output:
HELLO
*/
