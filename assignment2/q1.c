#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d", &n);
    for (int i = 0; i < 100; i++)
    {
        if (i % n == 0)
        {
            printf("The number %d is divisible by %d\n", i, n);
        }
    }
    return 0;
}
