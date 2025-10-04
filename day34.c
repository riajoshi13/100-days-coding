// Day 34
// Q67 and Q68 Combined Code

#include <stdio.h>

// Q67: Insert an element in an array at a given position
void insertAtPosition() {
    int n, pos, element;
    printf("Q67 Input: Enter size of array: ");
    scanf("%d", &n);

    int arr[n + 1];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter position and element to insert: ");
    scanf("%d %d", &pos, &element);

    if (pos < 0 || pos > n) {
        printf("Invalid position!\n\n");
        return;
    }

    for (int i = n; i > pos; i--)
        arr[i] = arr[i - 1];

    arr[pos] = element;
    n++;

    printf("Q67 Output: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n\n");
}

// Q68: Delete an element from an array
void deleteElement() {
    int n, pos;
    printf("Q68 Input: Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter position to delete: ");
    scanf("%d", &pos);

    if (pos < 0 || pos >= n) {
        printf("Invalid position!\n");
        return;
    }

    for (int i = pos; i < n - 1; i++)
        arr[i] = arr[i + 1];

    n--;

    printf("Q68 Output: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    insertAtPosition();
    deleteElement();
    return 0;
}

/*
Sample Test Cases:

Q67:
Input:
4
10 20 30 40
2 15
Output:
10 20 15 30 40

Q68:
Input:
5
1 2 3 4 5
2
Output:
1 2 4 5
*/
