// Day 28
// Q55 and Q56 Combined Code

#include <stdio.h>
#include <stdbool.h>

// Q55: Print all prime numbers from 1 to n
void primeNumbers(int n) {
    printf("Q55 Output:\n");
    for (int i = 2; i <= n; i++) {
        bool isPrime = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            printf("%d ", i);
        }
    }
    printf("\n\n");
}

// Q56: Read and print elements of a one-dimensional array
void arrayInputOutput() {
    int n;
    printf("Q56 Input: Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Q56 Output:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Q55 Input: Enter a number: ");
    scanf("%d", &n);
    primeNumbers(n);

    arrayInputOutput();
    return 0;
}

/*
Sample Test Cases:

Q55:
Input: 10
Output: 2 3 5 7

Input: 20
Output: 2 3 5 7 11 13 17 19

Q56:
Input: 3
10 20 30
Output: 10 20 30

Input: 5
1 2 3 4 5
Output: 1 2 3 4 5
*/
