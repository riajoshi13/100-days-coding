// Day 30
// Q59 and Q60 Combined Code

#include <stdio.h>

// Q59: Count even and odd numbers in an array
void countEvenOdd() {
    int n, even = 0, odd = 0;
    printf("Q59 Input: Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Q59 Output:\nEven = %d, Odd = %d\n\n", even, odd);
}

// Q60: Count positive, negative, and zero elements in an array
void countPosNegZero() {
    int n, pos = 0, neg = 0, zero = 0;
    printf("Q60 Input: Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > 0)
            pos++;
        else if (arr[i] < 0)
            neg++;
        else
            zero++;
    }

    printf("Q60 Output:\nPositive = %d, Negative = %d, Zero = %d\n", pos, neg, zero);
}

int main() {
    countEvenOdd();
    countPosNegZero();
    return 0;
}

/*
Sample Test Cases:

Q59:
Input:
6
1 2 3 4 5 6
Output:
Even = 3, Odd = 3

Q60:
Input:
5
-1 0 1 2 -2
Output:
Positive = 2, Negative = 2, Zero = 1
*/
