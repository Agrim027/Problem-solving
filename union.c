#include <stdio.h>

int main() {
    // Input two arrays and their sizes
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {4, 5, 6, 7, 8};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    // Initialize an empty array to store the union
    int union_arr[size1 + size2];

    // Initialize an index to keep track of the current position in the union array
    int index = 0;

    // Iterate over the first array
    for (int i = 0; i < size1; i++) {
        // Check if the current element is not already in the union array
        int found = 0;
        for (int j = 0; j < index; j++) {
            if (union_arr[j] == arr1[i]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            // Add the current element to the union array
            union_arr[index++] = arr1[i];
        }
    }

    // Iterate over the second array
    for (int i = 0; i < size2; i++) {
        // Check if the current element is not already in the union array
        int found = 0;
        for (int j = 0; j < index; j++) {
            if (union_arr[j] == arr2[i]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            // Add the current element to the union array
            union_arr[index++] = arr2[i];
        }
    }

    // Print the union array
    printf("Union of the two arrays: ");
    for (int i = 0; i < index; i++) {
        printf("%d ", union_arr[i]);
    }
    printf("\n");

    return 0;
}