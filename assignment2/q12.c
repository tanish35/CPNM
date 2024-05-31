#include <stdio.h>

int main()
{
    int a[100];
    printf("Enter the elements \n");
    for (int i = 0; i < 100; i++)
    {
        scanf("%d", &a[i]);
    }
    int p = 0, n = 0, z = 0;
    for (int i = 0; i < 100; i++)
    {
        if (a[i] == 0)
        {
            z++;
        }
        else if (a[i] > 0)
        {
            p++;
        }
        else
        {
            n++;
        }
    }
    printf("The number of positive numbers is %d\n", p);
    printf("The number of negative numbers is %d\n", n);
    printf("The number of zeros is %d\n", z);
    return 0;
}