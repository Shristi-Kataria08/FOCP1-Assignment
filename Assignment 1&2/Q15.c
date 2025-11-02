//Write a C program to cyclically rotate the array clockwise by one position, applying array
//transformation logic used in scheduling and encryption.
//Input: arr[] = {1, 2, 3, 4, 5}
//Output: arr[] = {5, 1, 2, 3, 4}
//Input: arr[] = {2, 3, 4, 5, 1}
//Output: {1, 2, 3, 4, 5}

#include <stdio.h>

int main() {
    int n, i;

    // Input size of array
    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Store last element temporarily
    int last = arr[n - 1];

    // Shift all elements one position to the right
    for (i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    // Place last element at the beginning
    arr[0] = last;

    // Output rotated array
    printf("\nArray after one cyclic rotation (clockwise):\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}