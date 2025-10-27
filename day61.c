// Day 61
// Q111: First Negative Integer in Each Subarray of Size k

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
        int found = 0;
        for (int j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                printf("%d ", arr[j]);
                found = 1;
                break;
            }
        }
        if (!found)
            printf("0 ");
    }

    return 0;
}

/*
Sample Test Cases:

Input 1:
5
-8 2 3 -6 10
2
Output 1:
-8 0 -6 -6

Input 2:
8
12 -1 -7 8 -15 30 16 28
3
Output 2:
-1 -1 -7 -15 -15 0

Input 3:
4
12 1 3 5
3
Output 3:
0 0
*/
