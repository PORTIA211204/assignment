#include <stdio.h>

// Recursive function to calculate sum of first n natural numbers
int sumOfN(int n) {
    if (n == 0)  // Base case
        return 0;
    return n + sumOfN(n - 1);  // Recursive call
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
        printf("Sum is not defined for negative numbers.\n");
    else
        printf("Sum of first %d natural numbers is %d\n", n, sumOfN(n));

    return 0;
}
