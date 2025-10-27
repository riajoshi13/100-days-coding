// Day 54
// Q104: Find the pivot integer
// The integer x such that sum(1 to x) = sum(x to n)
// If no such x exists, print -1

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int total = n * (n + 1) / 2; // sum(1 to n)
    int x = -1;

    for (int i = 1; i <= n; i++) {
        int left = i * (i + 1) / 2;     // sum(1 to i)
        int right = total - left + i;   // sum(i to n)
        if (left == right) {
            x = i;
            break;
        }
    }

    printf("%d\n", x);
    return 0;
}

/*
Sample Test Cases:

Input 1:
8
Output 1:
6
Explanation: sum(1 to 6) = 21, sum(6 to 8) = 21

Input 2:
1
Output 2:
1

Input 3:
4
Output 3:
-1
*/
