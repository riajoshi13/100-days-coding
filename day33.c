// Day 33
// Q65 and Q66 Combined Code

#include <stdio.h>

// Q65: Search in a sorted array using binary search
void binarySearch() {
    int n, key;
    printf("Q65 Input: Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    int low = 0, high = n - 1, mid, found = -1;

    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == key) {
            found = mid;
            break;
        } else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if (found != -1)
        printf("Q65 Output: Found at index %d\n\n", found);
    else
        printf("Q65 Output: -1\n\n");
}

// Q66: Insert an element in a sorted array at the appropriate position
void insertSorted() {
    int n, element;
    printf("Q66 Input: Enter size of sorted array: ");
    scanf("%d", &n);

    int arr[n + 1]; // +1 for new element
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to insert: ");
    scanf("%d", &element);

    int i;
    for (i = n - 1; (i >= 0 && arr[i] > element); i--)
        arr[i + 1] = arr[i];

    arr[i + 1] = element;
    n++;

    printf("Q66 Output: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    binarySearch();
    insertSorted();
    return 0;
}

/*
Sample Test Cases:

Q65:
Input:
5
1 3 5 7 9
7
Output:
Found at index 3

Q66:
Input:
5
1 2 4 5 6
3
Output:
1 2 3 4 5 6
*/
