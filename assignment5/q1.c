#include <stdio.h>

int main()
{
    int n, i, sum = 0;
    int *ptr;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    ptr = arr;

    printf("Array elements: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));
    }

    for (i = 0; i < n; i++)
    {
        sum += *(ptr + i);
    }

    printf("Sum of array elements: %d\n", sum);

    return 0;
}