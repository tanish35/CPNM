#include <stdio.h>

int main()
{
    int n = 100;
    for (int i = 2; i <= 100; i++)
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
            printf("%d is a prime number \n", i);
        }
    }
}
