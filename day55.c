// Day 55
// Q105: Find the majority element in an array
// Majority element = element that appears > n/2 times

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int nums[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int count = 0, candidate = 0;

    // Boyer-Moore Majority Vote Algorithm
    for (int i = 0; i < n; i++) {
        if (count == 0)
            candidate = nums[i];
        count += (nums[i] == candidate) ? 1 : -1;
    }

    // Verify if candidate is actually majority
    count = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == candidate)
            count++;
    }

    if (count > n / 2)
        printf("%d\n", candidate);
    else
        printf("-1\n");

    return 0;
}

/*
Sample Test Cases:

Input 1:
3
3 2 3
Output 1:
3

Input 2:
7
2 2 1 1 1 2 2
Output 2:
2

Input 3:
8
2 2 1 1 1 2 2 3
Output 3:
-1
*/
