#include <stdio.h>

void reverseArray(int arr[], int n) {
    int start = 0, end = n - 1, temp;
    
    // Swap elements from start to end
    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

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

    // Reverse the array
    reverseArray(arr, n);

    // Print reversed array
    printf("Reversed array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}
