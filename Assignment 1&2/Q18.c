//Develop a program to identify and print duplicate elements in an array, or print “-1” if no
//duplicates exist, applying frequency detection and data validation.
//Examples:
//Input: {2, 10,10, 100, 2, 10, 11,2,11,2}
//Output: 2 10 11
//Input: {5, 40, 1, 40, 100000, 1, 5, 1}
//Output: 5 40 1 


#include <stdio.h>

int main() {
    int arr[100], n, i, j;
    int found = 0;  // To track if any duplicates are found

    // Input size of array
    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nDuplicate elements are: ");

    // Traverse array to find duplicates
    for (i = 0; i < n; i++) {
        int count = 0;

        // Skip if this element was already marked as checked (-1)
        if (arr[i] == -1)
            continue;

        // Count occurrences of arr[i]
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                arr[j] = -1;  // Mark as checked
            }
        }

        // If duplicate found, print it
        if (count > 0) {
            printf("%d ", arr[i]);
            found = 1;
        }
    }

    // If no duplicates found
    if (!found)
        printf("-1");

    printf("\n");
    return 0;
}
