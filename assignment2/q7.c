#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d", &n);
    int s = 1;

    for (int i = 2; i <= n; i++)
    {
        int fact = 1;
        for (int j = 2; j <= i; j++)
        {
            fact *= j;
        }
        s += fact;
    }

    printf("The sum of the factorials is %d\n", s);
}
