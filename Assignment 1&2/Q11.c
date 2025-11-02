//Develop a C program to traverse an array of scores, determine whether each score is even or
//odd using conditional logic, and store them into two separate arrays — even_array and odd_array

#include <stdio.h>

int main() {
    int n, i;
    
    // Input the number of scores
    printf("Enter number of scores: ");
    scanf("%d", &n);

    int scores[n], even_array[n], odd_array[n];
    int evenCount = 0, oddCount = 0;

    // Input scores
    printf("Enter %d scores:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }

    // Traverse and classify scores
    for (i = 0; i < n; i++) {
        if (scores[i] % 2 == 0) {
            even_array[evenCount] = scores[i];
            evenCount++;
        } else {
            odd_array[oddCount] = scores[i];
            oddCount++;
        }
    }

    // Display even scores
    printf("\nEven scores: ");
    if (evenCount == 0)
        printf("None");
    else {
        for (i = 0; i < evenCount; i++)
            printf("%d ", even_array[i]);
    }

    // Display odd scores
    printf("\nOdd scores: ");
    if (oddCount == 0)
        printf("None");
    else {
        for (i = 0; i < oddCount; i++)
            printf("%d ", odd_array[i]);
    }

    printf("\n");

    return 0;
}