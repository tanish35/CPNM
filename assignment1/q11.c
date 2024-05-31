#include <stdio.h>
int main()
{
    int a, b, c, d, e;
    printf("Enter the marks of the five subjects ");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    if (a > 100 || b > 100 || c > 100 || d > 100 || e > 100 || a < 0 || b < 0 || c < 0 || d < 0 || e < 0)
    {
        printf("Wrong input ");
        return 0;
    }
    int s = a + b + c + d + e;
    float p = s / 5.0;
    printf("The aggregate marks is %d\n ", s);
    printf("The percentage is %f\n ", p);
}
