// Day 68
// Q118: Find the missing number from array 0 to n

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);      // size of array

    int arr[n];
    int sum = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    int total = n * (n + 1) / 2;   // sum of numbers from 0 to n
    int missing = total - sum;

    printf("%d", missing);
    return 0;
}

/*
Sample Input:
4
0 3 2 4

Output:
1
*/
