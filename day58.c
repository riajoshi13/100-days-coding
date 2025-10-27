// Day 58
// Q108: Product of Array Except Self

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int nums[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    int answer[n];

    for (int i = 0; i < n; i++) {
        int product = 1;
        for (int j = 0; j < n; j++) {
            if (i != j)
                product *= nums[j];
        }
        answer[i] = product;
    }

    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%d", answer[i]);
        if (i < n - 1)
            printf(",");
    }
    printf("]");

    return 0;
}

/*
Sample Test Cases:

Input 1:
4
1 2 3 4
Output 1:
[24,12,8,6]

Input 2:
5
-1 1 0 -3 3
Output 2:
[0,0,9,0,0]
*/
