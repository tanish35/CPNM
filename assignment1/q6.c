#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three numbers ");
    scanf("%d%d%d", &a, &b, &c);
    int max = a, min = a;
    if (b > max)
    {
        max = b;
    }
    if (c > max)
    {
        max = c;
    }
    if (b < min)
    {
        min = b;
    }
    if (c < min)
    {
        min = c;
    }
    printf("The maximum number is %d\n ", max);
    printf("The minimum number is %d\n ", min);
}
