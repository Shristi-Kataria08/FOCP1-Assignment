//Implement a C program to swap two numbers using four different methods, demonstrating
//diverse approaches such as arithmetic, bitwise XOR, pointer manipulation, and temporary variable
//usage — a key skill in memory and variable management.

#include <stdio.h>

// Method 1: Using a temporary variable
void swapWithTemp(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("After swapping (using temp): a = %d, b = %d\n", a, b);
}

// Method 2: Using arithmetic operators (+ and -)
void swapWithArithmetic(int a, int b) {
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping (using arithmetic): a = %d, b = %d\n", a, b);
}

// Method 3: Using bitwise XOR operator
void swapWithXOR(int a, int b) {
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("After swapping (using XOR): a = %d, b = %d\n", a, b);
}

// Method 4: Using pointers
void swapWithPointers(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("\nOriginal values: a = %d, b = %d\n\n", a, b);

    // Method 1
    swapWithTemp(a, b);

    // Method 2
    swapWithArithmetic(a, b);

    // Method 3
    swapWithXOR(a, b);

    // Method 4 (using pointers)
    int x = a, y = b;
    swapWithPointers(&x, &y);
    printf("After swapping (using pointers): a = %d, b = %d\n", x, y);

    return 0;
}