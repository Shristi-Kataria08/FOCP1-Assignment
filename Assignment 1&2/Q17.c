//Design a C program to delete an element from the front, middle, or end of an array, and print
//the array before and after deletion.

#include <stdio.h>

int main() {
    int arr[100], n, i, pos;

    // Input number of elements
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

    // Choose deletion position
    printf("\n\nChoose deletion position:\n");
    printf("1. Front\n2. Middle\n3. End\n");
    printf("Enter your choice: ");
    int choice;
    scanf("%d", &choice);

    switch (choice) {
        case 1: // Delete from front
            pos = 0;
            break;
        case 2: // Delete from middle
            pos = n / 2;
            break;
        case 3: // Delete from end
            pos = n - 1;
            break;
        default:
            printf("Invalid choice!\n");
            return 0;
    }

    // Shift elements to delete the chosen position
    for (i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--; // Decrease array size

    // Display updated array
    printf("\nArray after deletion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}
