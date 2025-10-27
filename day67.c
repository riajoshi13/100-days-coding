// Day 67
// Q117: Merge Two Sorted Arrays into One Sorted Array

#include <stdio.h>

int main() {
    int m, n;
    scanf("%d", &m);
    int nums1[m];
    for (int i = 0; i < m; i++)
        scanf("%d", &nums1[i]);

    scanf("%d", &n);
    int nums2[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &nums2[i]);

    int merged[m + n];
    int i = 0, j = 0, k = 0;

    // Merge both arrays in sorted order
    while (i < m && j < n) {
        if (nums1[i] <= nums2[j])
            merged[k++] = nums1[i++];
        else
            merged[k++] = nums2[j++];
    }

    // Copy remaining elements
    while (i < m)
        merged[k++] = nums1[i++];
    while (j < n)
        merged[k++] = nums2[j++];

    // Print merged array
    for (int x = 0; x < m + n; x++)
        printf("%d ", merged[x]);

    return 0;
}

/*
Sample Test Cases:

Input 1:
4
2 7 11 15
3
4 8 10
Output 1:
2 4 7 8 10 11 15

Input 2:
3
1 2 7
3
9 10 17
Output 2:
1 2 7 9 10 17

Input 3:
3
-10 -2 7
3
-3 -1 7
Output 3:
-10 -3 -2 -1 7 7
*/
