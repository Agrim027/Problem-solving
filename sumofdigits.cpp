//34. Given a non-negative integer num, repeatedly add all its digits until the result has only one digit. For example, if we conisder 98, we get 9+8 = 17 after first addition. Then we get 1+7 = 8. We stop at this point because we are left with one digit.
#include <stdio.h>

int main() {
    // Input non-negative integer
    int num;
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    // Repeatedly add all the digits until the result has only one digit
    while (num >= 10) {
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        num = sum;
    }

    // Print the result
    printf("The result is: %d\n", num);

    return 0;
}