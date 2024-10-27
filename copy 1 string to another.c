#include <stdio.h>
int main()
{
    char source[100]; 
    char destination[100]; 
    int i = 0;
    printf("Enter a string: ");
    fgets(source, sizeof(source), stdin);
    while (source[i] != '\0')
      {
        destination[i] = source[i]; 
        i++;r
    } 
  
    destination[i] = '\0';
    printf("Copied string: %s", destination);
    return 0;
}
