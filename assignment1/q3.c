#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number \n");
    scanf("%d", &n);
    int r = 0;
    while (n > 0)
    {
        r = r + n % 10;
        n = n / 10;
    }
    printf("The sum of digits is %d\n ", r);
}
