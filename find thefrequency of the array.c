#include <stdio.h>
int main() {
    int n, i, j, count;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int array[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++
    {
        scanf("%d", &array[i]);
    }
    printf("Element | Frequency\n");
    printf("----------------------\n")
    int visited[n];
    for (i = 0; i < n; i++)
  {
        if (visited[i] == 1) {
            continue;
        }
        count = 1;
        for (j = i + 1; j < n; j++) 
            if (array[i] == array[j]) {
                count++;
                visited[j] = 1; // Mark as counted
            }
        }
        visited[i] = 1
        printf("%7d | %9d\n", array[i], count);
    }
  return 0;
}
