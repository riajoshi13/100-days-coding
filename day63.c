// Day 63
// Q113: Find the Kth Smallest Element in an Array

#include <stdio.h>

void sortArray(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int n, k;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);

    sortArray(arr, n);

    printf("%d", arr[k - 1]);
    return 0;
}

/*
Sample Test Cases:

Input 1:
10
10 5 4 3 48 6 2 33 53 10
4
Output 1:
5

Input 2:
6
7 10 4 3 20 15
3
Output 2:
7
*/
