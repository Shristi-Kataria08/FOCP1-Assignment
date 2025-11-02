// Develop a C program to print a binary pyramid pattern.
//0 0
//01 01
//010 010
//0101 0101
//0101001010

#include <stdio.h>

int main() {
    int n, i, j;

    // Input number of rows
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        // Print left side of pattern
        for (j = 1; j <= i; j++) {
            printf("%d", j % 2);   // Alternating 0 and 1
        }

        // Print a space between two halves (only if not last line)
        if (i != n)
            printf(" ");

        // Print right side of pattern
        for (j = 1; j <= i; j++) {
            printf("%d", j % 2);
        }

        printf("\n");  // Move to next line
    }

    return 0;
}