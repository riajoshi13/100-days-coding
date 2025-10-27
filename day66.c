// Day 66
// Q116: Two Sum Problem (Find indices of two numbers that add up to target)

#include <stdio.h>

int main() {
    int n, target;
    scanf("%d", &n); // size of array

    int nums[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    scanf("%d", &target);

    int found = 0;

    // Brute force check for each pair
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("%d %d", i, j);
                found = 1;
                break;
            }
        }
        if (found)
            break;
    }

    if (!found)
        printf("-1 -1");

    return 0;
}

/*
Sample Test Cases:

Input 1:
4
2 7 11 15
9
Output 1:
0 1

Input 2:
3
3 2 4
6
Output 2:
1 2

Input 3:
2
3 3
6
Output 3:
0 1
*/
