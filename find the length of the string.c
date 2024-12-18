#include <stdio.h>

int main() {
    char str[100];
    int length = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read a line of input

    // Loop through the string until the null terminator is found
    while (str[length] != '\0') {
        length++; // Increment the length counter
    }

    // Subtract 1 if the last character is a newline from fgets
    if (length > 0 && str[length - 1] == '\n') {
        length--; // Adjust length to exclude the newline character
    }

    printf("Length of the string: %d\n", length);
    return 0;
}
