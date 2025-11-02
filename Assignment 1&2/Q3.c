//Design a C program to subtract two integers without using the minus (-) operator, applying
//bitwise operators. Highlight how such logic can be used in low-level arithmetic operations in
//embedded systems or processors

#include <stdio.h>

// Function to subtract two integers using bitwise operators
int subtract(int a, int b) {
    // Use bitwise operations until there is no borrow
    while (b != 0) {
        // Borrow contains common set bits of ~a and b
        int borrow = (~a) & b;

        // Subtract b from a using XOR
        a = a ^ b;

        // Borrow is shifted by one so that subtracting it gives the correct result
        b = borrow << 1;
    }
    return a;
}

int main() {
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    int result = subtract(num1, num2);

    printf("Subtraction of %d and %d is: %d\n", num1, num2, result);

    return 0;
}