//Develop a C program to check whether a given number is an Armstrong number or not,
//demonstrating understanding of number manipulation and digit-based computations used in digital
//verification systems

#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, n = 0;
    double result = 0.0;

    // Input number from user
    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    // Count number of digits
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        ++n;
    }

    // Compute sum of nth powers of digits
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, n);
        temp /= 10;
    }

    // Check if Armstrong or not
    if ((int)result == originalNum)
        printf("%d is an Armstrong number.\n", originalNum);
    else
        printf("%d is not an Armstrong number.\n", originalNum);

    return 0;
}