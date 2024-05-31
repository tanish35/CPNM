#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d", &n);
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            int c = 0;
            for (int j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    c++;
                }
            }
            if (c == 0)
            {
                printf("%d is a prime factor\n ", i);
            }
        }
    }
}
