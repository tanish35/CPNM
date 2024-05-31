#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[7] = {1, 2, 3, 4, 5, 6, 7};

    int n = sizeof(a) / sizeof(int);
    n = n - 1;
    // int *b=(int*)calloc(n,sizeof(int));
    int k = 0;
    for (int i = 0; i <= n / 2; i++)
    {
        int temp = a[i];
        a[i] = a[n - i];
        a[n - i] = temp;
    }
    for (int i = 0; i <= n; i++)
    {
        printf("%d\n", a[i]);
    }
}
