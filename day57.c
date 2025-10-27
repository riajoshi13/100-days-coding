// Day 57
// Q107: Find Previous Greater Element (Brute Force Approach)

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        int prev = -1;
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prev = arr[j];
                break;
            }
        }
        printf("%d", prev);
        if (i != n - 1) printf(", ");
    }
    printf("\n");

    return 0;
}

/*
Sample Test Cases:

Input 1:
4
1 3 2 4
Output 1:
-1, -1, 3, -1

Input 2:
5
6 8 0 1 3
Output 2:
-1, -1, 8, 8, 8

Input 3:
4
1 2 3 5
Output 3:
-1, -1, -1, -1

Input 4:
4
5 4 3 1
Output 4:
-1, 5, 4, 3
*/
