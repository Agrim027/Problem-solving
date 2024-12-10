// Absolute difference of 1
#include <stdio.h>
#include <stdlib.h>

// Function to check if a number has adjacent digits with a difference of 1
int has_adjacent_diff_1(int num) {
    int prev_digit = num % 10;
    num /= 10;
    while (num > 0) {
        int curr_digit = num % 10;
        if (abs(curr_digit - prev_digit) != 1) {
            return 0;
        }
        prev_digit = curr_digit;
        num /= 10;
    }
    return 1;
}

int main() {
    // Input array and size
    int arr[] = {7, 98, 56, 43, 45, 23, 12, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Input value of k
    int k;
    printf("Enter the value of k: ");
    scanf("%d", &k);

    // Initialize an empty array to store the result
    int result[size];
    int j = 0;

    // Iterate over the input array
    for (int i = 0; i < size; i++) {
        // Check if the number is less than k and has adjacent digits with a difference of 1
        if (arr[i] < k && has_adjacent_diff_1(arr[i])) {
            result[j++] = arr[i];
        }
    }

    // Print the result
    printf("Numbers less than k with adjacent digits difference as 1: ");
    for (int i = 0; i < j; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}