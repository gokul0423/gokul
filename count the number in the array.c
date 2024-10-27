#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Please enter a positive number of elements.\n");
        return 1;
    }
    int array[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &array[i]);
    }
    printf("The number of elements in the array is: %d\n", n);
    return 0;
}