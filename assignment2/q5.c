#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d", &n);
    int s = 0;
    for (int i = 1; i <= n; i++)
    {
        s += i * (i + 1);
    }
    printf("The sum is %d\n", s);
}
