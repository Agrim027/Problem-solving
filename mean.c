//23 Function & Recursion	Write a program to find mean and median of five numbers using function

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Function to calculate the mean of a list of numbers
double calculate_mean(double numbers[], int size) {
    double sum = 0.0;
    for (int i = 0; i < size; i++) {
        sum += numbers[i];
    }
    return sum / size;
}

// Function to calculate the median of a list of numbers
double calculate_median(double numbers[], int size) {
    // Sort the list in ascending order
    double sorted_numbers[size];
    for (int i = 0; i < size; i++) {
        sorted_numbers[i] = numbers[i];
    }
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (sorted_numbers[i] > sorted_numbers[j]) {
                double temp = sorted_numbers[i];
                sorted_numbers[i] = sorted_numbers[j];
                sorted_numbers[j] = temp;
            }
        }
    }

    // Calculate the median
    if (size % 2 == 0) {
        return (sorted_numbers[size / 2 - 1] + sorted_numbers[size / 2]) / 2;
    } else {
        return sorted_numbers[size / 2];
    }
}

int main() {
    // Input: list of five numbers
    double numbers[] = {10, 20, 30, 40, 50};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    double mean = calculate_mean(numbers, size);
    double median = calculate_median(numbers, size);

    printf("Mean: %.2f\n", mean);
    printf("Median: %.2f\n", median);

    return 0;
}