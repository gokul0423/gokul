#include <stdio.h>
int main() 
{
    FILE *filePointer;
    char text[100];

    filePointer = fopen("output.txt", "w");

    if (filePointer == NULL)
{
        printf("Error opening file!\n");
        return 1; 
    }

    printf("Enter text to write to the file (max 99 characters): ");
    fgets(text, sizeof(text), stdin);

    fprintf(filePointer, "%s", text);

    fclose(filePointer);

    printf("Text written to output.txt successfully.\n");
    return 0; 
}
