#include <stdio.h>

int main()
{
    int n;
    printf("Enter a five digit number: ");
    scanf("%d", &n);
    char s[5] = "";
    for (int i = 1; i <= 5; i++)
    {
        if (n % 10 != 9)
        {
            s[5 - i] = ((n % 10) + 1) + '0';
        }
        else
        {
            s[5 - i] = '0';
        }
        n /= 10;
    }
    printf("The new number is: %s\n", s);
    return 0;
}