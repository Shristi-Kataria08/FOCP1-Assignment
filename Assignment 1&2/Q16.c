//Implement a C program to insert an element at the front, middle, or end of an array, and print
//the array before and after insertion

#include <stdio.h>

int main() {
    int arr[100], n, i, pos, element;

    // Input initial size
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    // Input elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Display original array
    printf("\nOriginal array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Input element to insert
    printf("\n\nEnter the element to insert: ");
    scanf("%d", &element);

    // Choose position
    printf("Choose insertion position:\n");
    printf("1. Front\n2. Middle\n3. End\n");
    printf("Enter your choice: ");
    int choice;
    scanf("%d", &choice);

    switch (choice) {
        case 1: // Insert at front
            pos = 0;
            break;
        case 2: // Insert at middle
            pos = n / 2;
            break;
        case 3: // Insert at end
            pos = n;
            break;
        default:
            printf("Invalid choice!\n");
            return 0;
    }

    // Shift elements to make space for new element
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert new element
    arr[pos] = element;
    n++; // Increase array size

    // Display new array
    printf("\nArray after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}