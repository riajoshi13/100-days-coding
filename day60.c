// Day 60
// Q110: Maximum Element in Each Subarray of Size k

#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    for (int i = 0; i <= n - k; i++) {
        int max = arr[i];
        for (int j = i; j < i + k; j++) {
            if (arr[j] > max)
                max = arr[j];
        }
        printf("%d ", max);
    }

    return 0;
}

/*
Sample Test Cases:

Input 1:
9
1 2 3 1 4 5 2 3 6
3
Output 1:
3 3 4 5 5 5 6

Input 2:
5
5 1 3 4 2
1
Output 2:
5 1 3 4 2
*/
