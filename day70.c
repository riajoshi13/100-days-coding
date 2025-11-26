// Day 70
// Q120: Convert string to Sentence Case (Title Case)

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    
    // read a full sentence including spaces
    fgets(str, sizeof(str), stdin);

    int i = 0;

    // If the first character is a letter, capitalize it
    if(str[0] >= 'a' && str[0] <= 'z') {
        str[0] = str[0] - 32;
    }

    // Convert every first letter after space
    for(i = 1; str[i] != '\0'; i++) {
        if(str[i-1] == ' ' && str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;  // convert to uppercase
        }
    }

    printf("%s", str);
    return 0;
}

/*
Sample Input:
I am trying to build logic.

Output:
I Am Trying To Build Logic.
*/
