#include <stdio.h>

int main()
{
    FILE *file1, *file2;
    int ch1, ch2;
    long position = 0;

    file1 = fopen("file1.txt", "r");
    if (file1 == NULL) {
        printf("Error opening file1.txt!\n");
        return 1; 
    }

    file2 = fopen("file2.txt", "r");
    if (file2 == NULL) {
        printf("Error opening file2.txt!\n");
        fclose(file1); 
        return 1; 
    }

    while (1) 
{
        ch1 = fgetc(file1);
        ch2 = fgetc(file2);
      
        if (ch1 == EOF && ch2 == EOF) {
            printf("The files are identical.\n");
            break;
        }

        if (ch1 == EOF || ch2 == EOF)
{
            printf("The files are different. One file is shorter.\n");
            break;
        }

        if (ch1 != ch2) 
{
            printf("The files differ at position %ld:\n", position);
            printf("file1: '%c' (ASCII: %d)\n", ch1, ch1);
            printf("file2: '%c' (ASCII: %d)\n", ch2, ch2);
            break;
        }

        position++;
    }

    fclose(file1);
    fclose(file2);

    return 0; 
}
