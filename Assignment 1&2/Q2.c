//Construct a C program to find the HCF (Highest Common Factor) of two integers using
//iterative or recursive logic — a core operation in optimisation algorithms and cryptographic
//computations.

#include <stdio.h>

int main() {
    int num1, num2, hcf;

    // Input two numbers
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    int a = num1, b = num2;

    // Euclidean algorithm (iterative)
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    hcf = a;

    printf("HCF of %d and %d is %d\n", num1, num2, hcf);

    return 0;
}