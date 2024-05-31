#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    int rev = 0;
    while (y != 0)
    {
        rev = rev * 10 + y % 10;
        y = y / 10;
    }
    while (rev != 0)
    {
        x = x * 10 + rev % 10;
        rev = rev / 10;
    }
    printf("The new number is: %d", x);
    return 0;
}