#include <stdio.h>
#include <ctype.h>  // for tolower()

// Q13: Check Leap Year
void q13() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        printf("%d is a Leap Year\n", year);
    } else {
        printf("%d is NOT a Leap Year\n", year);
    }
}

// Q14: Check Vowel or Consonant
void q14() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);  // space before %c to skip whitespace

    ch = tolower(ch);  // make lowercase for easy comparison

    if (ch >= 'a' && ch <= 'z') {  // check if alphabet
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("%c is a Vowel\n", ch);
        } else {
            printf("%c is a Consonant\n", ch);
        }
    } else {
        printf("%c is not an alphabet character\n", ch);
    }
}

int main() {
    printf("Running Q13:\n");
    q13();

    printf("\nRunning Q14:\n");
    q14();

    return 0;
}
