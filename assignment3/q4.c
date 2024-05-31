#include <stdio.h>

int main()
{
    int n, i, small, large, num, range;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter number 1: ");
    scanf("%d", &num);
    small = large = num;

    for (i = 2; i <= n; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if (num < small)
            small = num;

        if (num > large)
            large = num;
    }

    range = large - small;
    printf("Range of the entered numbers is: %d\n", range);

    return 0;
}