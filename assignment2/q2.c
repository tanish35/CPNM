#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d", &n);
    int s = 0;
    while (n != 0)
    {
        s += n % 10;
        n /= 10;
    }
    printf("The sum of the digits of the number is %d \n", s);
}
