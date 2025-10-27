// Day 62
// Q112: Maximum Sum of Contiguous Subarray (Kadane’s Algorithm)

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max_sum = arr[0];
    int current_sum = arr[0];

    for (int i = 1; i < n; i++) {
        // Either start a new subarray or extend the previous one
        if (current_sum + arr[i] > arr[i])
            current_sum = current_sum + arr[i];
        else
            current_sum = arr[i];

        // Update max_sum if current_sum is greater
        if (current_sum > max_sum)
            max_sum = current_sum;
    }

    printf("%d", max_sum);
    return 0;
}

/*
Sample Test Cases:

Input 1:
7
2 3 -8 7 -1 2 3
Output 1:
11

Input 2:
2
-2 -4
Output 2:
-2

Input 3:
5
5 4 1 7 8
Output 3:
25
*/
