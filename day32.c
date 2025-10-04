// Day 32
// Q63 and Q64 Combined Code

#include <stdio.h>

// Q63: Merge two arrays
void mergeArrays() {
    int n1, n2;
    printf("Q63 Input: Enter size of first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter %d elements: ", n1);
    for (int i = 0; i < n1; i++)
        scanf("%d", &arr1[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter %d elements: ", n2);
    for (int i = 0; i < n2; i++)
        scanf("%d", &arr2[i]);

    int merged[n1 + n2];
    for (int i = 0; i < n1; i++)
        merged[i] = arr1[i];
    for (int i = 0; i < n2; i++)
        merged[n1 + i] = arr2[i];

    printf("Q63 Output: ");
    for (int i = 0; i < n1 + n2; i++)
        printf("%d ", merged[i]);
    printf("\n\n");
}

// Q64: Find the digit that occurs the most times in an integer number
void mostFrequentDigit() {
    long long num;
    printf("Q64 Input: Enter an integer: ");
    scanf("%lld", &num);

    int count[10] = {0};

    // Count occurrences of each digit
    while (num > 0) {
        int digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    int maxCount = 0, mostFreq = 0;
    for (int i = 0; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            mostFreq = i;
        }
    }

    printf("Q64 Output: %d\n", mostFreq);
}

int main() {
    mergeArrays();
    mostFrequentDigit();
    return 0;
}

/*
Sample Test Cases:

Q63:
Input:
3
1 2 3
2
4 5
Output:
1 2 3 4 5

Q64:
Input:
112233
Output:
1

Input:
887799
Output:
7
*/
