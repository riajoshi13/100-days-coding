// Day 35
// Q69 and Q70 Combined Code

#include <stdio.h>

// Q69: Find the second largest element in an array
void secondLargest() {
    int n;
    printf("Q69 Input: Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    if (n < 2) {
        printf("Q69 Output: Not enough elements\n\n");
        return;
    }

    int first = arr[0], second = -999999; // assuming no smaller input than this

    for (int i = 1; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] < first) {
            second = arr[i];
        }
    }

    if (second == -999999)
        printf("Q69 Output: No second largest element\n\n");
    else
        printf("Q69 Output: %d\n\n", second);
}

// Q70: Rotate an array to the right by k positions
void rotateRight() {
    int n, k;
    printf("Q70 Input: Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter k (positions to rotate): ");
    scanf("%d", &k);

    k = k % n; // handle if k > n

    int temp[n];

    for (int i = 0; i < n; i++)
        temp[(i + k) % n] = arr[i];

    printf("Q70 Output: ");
    for (int i = 0; i < n; i++)
        printf("%d ", temp[i]);
    printf("\n");
}

int main() {
    secondLargest();
    rotateRight();
    return 0;
}

/*
Sample Test Cases:

Q69:
Input:
5
10 20 30 40 50
Output:
40

Q70:
Input:
5
1 2 3 4 5
2
Output:
4 5 1 2 3
*/
