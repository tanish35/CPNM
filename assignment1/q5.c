#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers ");
    scanf("%d%d", &a, &b);
    if (a % b == 0 && a > b)
    {
        printf("The decimal is %f", (float)a / b);
    }
    else if (a % b == 0 && b > a)
    {
        printf("The decimal is %f", (float)b / a);
    }
    else if (a > b)
    {
        float c;
        int d;
        c = (float)a / b;
        d = a % b;
        printf("The fractional part is %d/%d", d, b);
        printf("The decimal is %f ", c);
    }

    else
    {
        float c;
        int d;
        c = (float)b / a;
        d = b % a;
        printf("The fractional part is %d/%d", d, a);
        printf("The decimal is %f ", c);
    }
}
