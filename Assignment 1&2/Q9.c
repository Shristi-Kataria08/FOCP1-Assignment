// Design a C program to find the first occurrence of the score “99” in an array, focusing on linear
//search and data retrieval techniques

#include <stdio.h>

int main() {
    int n, i, flag = 0;

    // Input array size
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    int scores[n];

    // Input array elements
    printf("Enter %d scores:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }

    // Linear search for first occurrence of 99
    for (i = 0; i < n; i++) {
        if (scores[i] == 99) {
            printf("The first occurrence of score 99 is at position %d.\n", i + 1);
            flag = 1;
            break;
        }
    }

    // If 99 not found
    if (flag == 0) {
        printf("Score 99 not found in the array.\n");
    }

    return 0;
}