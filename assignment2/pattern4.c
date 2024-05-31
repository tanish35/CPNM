#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (int i = 1; i <= n * 2 - 1; i++)
    {
        for (int j = 1; j <= n * 2 - 1 - i; j++)
        {
            printf(" ");
        }
        if (i % 2 != 0)
        {
            for (int j = 1; j <= ceil((float)i / 2); j++)
            {
                printf("%d", j);
                printf(" ");
            }
            for (int j = ceil((float)i / 2) - 1; j >= 1; j--)
            {
                printf("%d", j);
                printf(" ");
            }
        }
        else
        {
            for (int j = 1; j <= ceil((float)i / 2); j++)
            {
                printf("%d", j);
                printf(" ");
            }
            for (int j = ceil((float)i / 2); j >= 1; j--)
            {
                printf("%d", j);
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}