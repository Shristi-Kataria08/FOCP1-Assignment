// Develop a C program to find the maximum and minimum scores in an array, applying
//comparative logic for ranking and analysis 

#include <stdio.h>

int main() {
    int n, i;

    // Input number of scores
    printf("Enter number of scores: ");
    scanf("%d", &n);

    int scores[n];

    // Input scores
    printf("Enter %d scores:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }

    // Initialize max and min with first element
    int max = scores[0];
    int min = scores[0];

    // Traverse array to find max and min
    for (i = 1; i < n; i++) {
        if (scores[i] > max)
            max = scores[i];
        if (scores[i] < min)
            min = scores[i];
    }

    // Display results
    printf("\nMaximum score: %d\n", max);
    printf("Minimum score: %d\n", min);

    return 0;
}