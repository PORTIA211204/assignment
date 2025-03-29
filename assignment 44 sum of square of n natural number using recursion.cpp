#include <stdio.h>

// Recursive function to calculate sum of squares of first n natural numbers
int sumOfSquares(int n) {
    if (n == 0)  // Base case
        return 0;
    return (n * n) + sumOfSquares(n - 1);  // Recursive call
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
        printf("Sum of squares is not defined for negative numbers.\n");
    else
        printf("Sum of squares of first %d natural numbers is %d\n", n, sumOfSquares(n));

    return 0;
}
