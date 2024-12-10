//3 Check whether an alphabet entered by the user is a vowel or a consonant.
#include <stdio.h>

int main() {
    // Input an alphabet from the user
    char alphabet;
    printf("Enter an alphabet: ");
    scanf(" %c", &alphabet);

    // Check if the alphabet is a vowel
    if (alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u' ||
        alphabet == 'A' || alphabet == 'E' || alphabet == 'I' || alphabet == 'O' || alphabet == 'U') {
        printf("%c is a vowel.\n", alphabet);
    }
    // Check if the alphabet is a consonant
    else if (alphabet >= 'a' && alphabet <= 'z' && alphabet != 'a' && alphabet != 'e' && alphabet != 'i' && alphabet != 'o' && alphabet != 'u') {
        printf("%c is a consonant.\n", alphabet);
    }
    // Check if the input is not an alphabet
    else {
        printf("Invalid input. Please enter an alphabet.\n");
    }

    return 0;
}