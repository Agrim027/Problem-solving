//35.  You have been given an array/list(ARR) of size N. You need to swap every pair of alternate elements in the array/list. You don't need to print or return anything, just change in the input array itself.
#include <stdio.h>

int main() {
    // Input array and size
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Swap every pair of alternate elements
    for (int i = 0; i < size - 1; i += 2) {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }

    // Print the modified array
    printf("Modified array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}