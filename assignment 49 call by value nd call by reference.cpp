#include <stdio.h>

// Function using Call by Value
void callByValue(int a) {
    a = a * 2; // Modify value (won't affect original)
    printf("Inside callByValue: a = %d\n", a);
}

// Function using Call by Reference
void callByReference(int *b) {
    *b = *b * 2; // Modify value (affects original)
    printf("Inside callByReference: b = %d\n", *b);
}

int main() {
    int x = 10, y = 10;

    printf("Before callByValue: x = %d\n", x);
    callByValue(x);
    printf("After callByValue: x = %d\n", x); // x remains unchanged

    printf("\nBefore callByReference: y = %d\n", y);
    callByReference(&y);
    printf("After callByReference: y = %d\n", y); // y is modified

    return 0;
}
