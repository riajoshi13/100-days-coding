// Day 69
// Q119: Find the repeated element in one iteration

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int freq[n];   // to track seen elements

    // initialize frequency array to 0
    for(int i = 0; i < n; i++) {
        freq[i] = 0;
    }

    int repeated = -1;

    // ONE SINGLE ITERATION
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if(freq[arr[i]] == 1) {
            repeated = arr[i];
        } else {
            freq[arr[i]] = 1;
        }
    }

    printf("%d", repeated);
    return 0;
}

/*
Sample Input:
4
1 3 3 4

Output:
3
*/
