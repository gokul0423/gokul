#include <stdio.h>
#include <ctype.h>
void convertToUppercase(char *str)
{
    while (*str)
{
        *str = toupper((unsigned char)*str);
        str++;
    }
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read a string with spaces

    convertToUppercase(str);

    printf("Uppercase string: %s", str);

    return 0;
}
