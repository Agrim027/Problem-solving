// 24 Tail recursive function to calculate factorial
#include <stdio.h>

int factorialHelper(int n, int accumulator) {
    if (n == 0 || n == 1) {
        return accumulator;
    }
    return factorialHelper(n - 1, n * accumulator);
}

// Wrapper function for factorial calculation
int factorial(int n) {
    return factorialHelper(n, 1);
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    int result = factorial(number);
    printf("Factorial of %d is %d\n", number, result);
    
    return 0;
}