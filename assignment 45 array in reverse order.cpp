#include <stdio.h>

int main() {
    int n, i;
    
    // Input array size
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n]; // Declare array

    // Input array elements
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Print array in reverse order
    printf("Array in reverse order: ");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    
    printf("\n");
    return 0;
}
