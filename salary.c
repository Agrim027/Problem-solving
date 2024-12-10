//1. Write a program to calculate the total salary of a person. The user has to enter the basic salary (an integer) and the grade (an uppercase character), and depending upon which the total salary is calculated as -                            totalSalary = basic + hra + da + allow – pf. where : hra = 20% of basic, da = 50% of basic, allow = 1700 if grade = ‘A’, allow = 1500 if grade = ‘B’, allow = 1300 if grade = ‘C' or any other character, pf = 11% of basic. Round off the total salary and then print the integral part only.
#include <stdio.h>

int main() {
    // Input basic salary and grade
    int basic;
    char grade;
    printf("Enter the basic salary: ");
    scanf("%d", &basic);
    printf("Enter the grade (A, B, or C): ");
    scanf(" %c", &grade);

    // Calculate hra, da, and pf
    double hra = 0.2 * basic;
    double da = 0.5 * basic;
    double pf = 0.11 * basic;

    // Calculate allow based on grade
    double allow;
    switch (grade) {
        case 'A':
            allow = 1700;
            break;
        case 'B':
            allow = 1500;
            break;
        case 'C':
            allow = 1300;
            break;
        default:
            allow = 0;
            break;
    }

    // Calculate total salary
    double totalSalary = basic + hra + da + allow - pf;

    // Round off the total salary and print the integral part
    printf("The total salary is: %d\n", (int)totalSalary);

    return 0;
}