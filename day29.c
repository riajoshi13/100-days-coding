// Day 29
// Q57 and Q58 Combined Code

#include <stdio.h>

// Q57: Find the sum of array elements
void sumOfArray() {
    int n, sum = 0;
    printf("Q57 Input: Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Q57 Output:\nSum = %d\n\n", sum);
}

// Q58: Find maximum and minimum element in an array
void maxMinArray() {
    int n;
    printf("Q58 Input: Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0], min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    printf("Q58 Output:\nMax = %d, Min = %d\n", max, min);
}

int main() {
    sumOfArray();
    maxMinArray();
    return 0;
}

/*
Sample Test Cases:

Q57:
Input:
4
2 4 6 8
Output:
20

Q58:
Input:
5
2 9 1 4 7
Output:
Max = 9, Min = 1
*/
