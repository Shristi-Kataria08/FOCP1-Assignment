//Design a C program to find a peak element that is not smaller than its neighbours

#include <stdio.h>

int main() {
    int n, i;

    // Input number of elements
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Handle special cases
    if (n == 1) {
        printf("Peak element is %d at position 1\n", arr[0]);
        return 0;
    }

    // Check if the first element is a peak
    if (arr[0] >= arr[1]) {
        printf("Peak element is %d at position 1\n", arr[0]);
        return 0;
    }

    // Check middle elements
    for (i = 1; i < n - 1; i++) {
        if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1]) {
            printf("Peak element is %d at position %d\n", arr[i], i + 1);
            return 0;
        }
    }

    // Check if the last element is a peak
    if (arr[n - 1] >= arr[n - 2]) {
        printf("Peak element is %d at position %d\n", arr[n - 1], n);
        return 0;
    }

    return 0;
}