#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter number of elements in array ");
    scanf("%d", &n);
    int *arr = (int *)calloc(n, sizeof(int));
    printf("Enter the elements in array ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n\n\n");
    int dup = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != -50)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    dup++;
                    arr[j] = -50;
                }
            }
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] != -50)
        {
            printf("%d\n", arr[i]);
        }
    }
}
