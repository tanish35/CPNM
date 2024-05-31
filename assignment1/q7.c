#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three numbers ");
    scanf("%d%d%d", &a, &b, &c);
    float avg = (float)(a + b + c) / 3;
    if (a > avg)
    {
        printf("%d is above average\n ", a);
    }
    if (b > avg)
    {
        printf("%d is above average\n ", b);
    }
    if (c > avg)
    {
        printf("%d is above average\n ", c);
    }
    if (a < avg)
    {
        printf("%d is below average\n ", a);
    }
    if (b < avg)
    {
        printf("%d is below average\n ", b);
    }
    if (c < avg)
    {
        printf("%d is below average\n ", c);
    }
}
