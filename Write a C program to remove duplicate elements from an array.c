#include <stdio.h>
int main()
{
    int n, i, j, k = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int array[n], unique[n];
    printf("Enter %d elements:\n", n)
    for (i = 0; i < n; i++) 
{
        scanf("%d", &array[i]);
    }
    for (i = 0; i < n; i++) 
{
        
        int isDuplicate = 0;
        for (j = 0; j < k; j++)
{
            if (array[i] == unique[j]) 
{
                isDuplicate = 1;
                break;
            }
        }
        
        if (!isDuplicate) 
{
            unique[k++] = array[i];
        }
    }

   
    printf("Array after removing duplicates:\n");
    for (i = 0; i < k; i++)
{
        printf("%d ", unique[i]);
    }
    printf("\n");

    return 0;
}
