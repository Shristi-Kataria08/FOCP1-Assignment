// Develop a C program to count the number of prime numbers in an array

#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    int i;
    if (num <= 1)
        return 0; // 0 and 1 are not prime

    for (i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0; // Not prime
    }
    return 1; // Prime
}

int main() {
    int n, i, count = 0;

    // Input number of elements
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Check each number for primality
    for (i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            count++;
        }
    }

    // Display result
    printf("\nTotal prime numbers in the array: %d\n", count);

    return 0;
}