// Day 50
// Q99 and Q100 Combined Code

#include <stdio.h>
#include <string.h>

// Function for Q99: Change date format from dd/mm/yyyy to dd-Mon-yyyy
void changeDateFormat() {
    char date[15];
    char day[3], month[3], year[5];
    char *months[] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    int m;

    printf("Q99 Input: Enter date (dd/mm/yyyy): ");
    scanf("%s", date);

    // Extract parts using substring
    strncpy(day, date, 2);
    day[2] = '\0';
    strncpy(month, date + 3, 2);
    month[2] = '\0';
    strncpy(year, date + 6, 4);
    year[4] = '\0';

    // Convert month to integer
    sscanf(month, "%d", &m);

    if (m < 1 || m > 12) {
        printf("Invalid month!\n\n");
        return;
    }

    printf("Q99 Output: %s-%s-%s\n\n", day, months[m - 1], year);
}

// Function for Q100: Print all substrings of a string
void printAllSubstrings() {
    char str[100];
    int len, i, j, k;

    printf("Q100 Input: Enter a string: ");
    scanf("%s", str);

    len = strlen(str);
    printf("Q100 Output: ");
    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            for (k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            if (i != len - 1 || j != len - 1) printf(","); // add comma except last
        }
    }
    printf("\n");
}

int main() {
    changeDateFormat();
    printAllSubstrings();
    return 0;
}

/*
Sample Test Cases:

Q99:
Input:
15/04/2025
Output:
15-Apr-2025

Q100:
Input:
abc
Output:
a,ab,abc,b,bc,c
*/
