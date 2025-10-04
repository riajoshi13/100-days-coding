// Day 31
// Q61 and Q62 Combined Code

#include <stdio.h>

// Q61: Search for an element in an array using linear search
void linearSearch() {
    int n, key, found = -1;
    printf("Q61 Input: Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = i;
            break;
        }
    }

    if (found != -1)
        printf("Q61 Output: Found at index %d\n\n", found);
    else
        printf("Q61 Output: -1 (Element not found)\n\n");
}

// Q62: Reverse an array without taking extra space
void reverseArray() {
    int n;
    printf("Q62 Input: Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Reversing in place
    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    printf("Q62 Output: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    linearSearch();
    reverseArray();
    return 0;
}

/*
Sample Test Cases:

Q61:
Input:
5
1 2 3 4 5
3
Output:
Found at index 2

Q62:
Input:
4
1 2 3 4
Output:
4 3 2 1
*/
