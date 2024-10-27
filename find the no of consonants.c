#include <stdio.h>
#include <ctype.h>
int main()
{
    char str[100]; 
    int consonantCount = 0; 
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 
    for (int i = 0; str[i] != '\0'; i++
    {
        char ch = tolower(str[i]);
        if (isalpha(ch) && !(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'))
        {
            consonantCount++; // Increment the counter for each consonant found
        }
    }
    printf("Number of consonants: %d\n", consonantCount);
    return 0;
}
